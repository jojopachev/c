#include <math.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define IMG_H 80
#define IMG_W 80

char img[IMG_H][IMG_W];

typedef void (*curve_f)(double, int*, int*);

void set_pixel(int x, int y);
void flood_fill(int x, int y);

void draw_curve(curve_f f, double t_start, double t_end, double t_step)
{
  double t = 0;

  for (t = t_start; t <= t_end; t += t_step)
  {
    int x, y;
    (*f)(t, &x, &y);
    set_pixel(x, y);
  }
}

#define SHIFT_T (80.0/180.0*M_PI)

void line_g(double t , int* x, int* y);
void line_f(double t , int* x, int* y)
{
  line_g(t+M_PI/3, x, y);
}

void line_y(double t , int* x, int* y)
{
  *y = t;
  *x = 0;
}

void line_g(double t , int* x, int* y)
{
  //double r = 0;
	//double sq_fudge = 0.00*(t-SHIFT_T)*(t-SHIFT_T);
  //r = (M_PI/2-t- sq_fudge)/(M_PI/2)+2.0;
  //*y = (int)(15.0*r*sin(t));
  //*x = (int)(15.0*r*cos(t));
	//printf("t=%.2f x=%d y=%d\n", t, *x, *y);
	double sin_t = sin(t);
	*x = (int)(10.0 * (4 * sin_t * sin_t * sin_t));
	*y = (int)(10.0 * (3.0 * cos(t) - 1.3 * cos(2.0 * t) -
		0.6 * cos(3.0 * t) - 0.2 * cos(4.0 * t)));
}

void line_x(double t , int* x, int* y)
{
  *x = t;
  *y =  0;
}

int trans_coords(int x, int y, int *real_x, int *real_y)
{
  *real_y = -y + IMG_H/2;
  *real_x = x + IMG_W/2;
  
  if (*real_y >= IMG_H || *real_y < 0 || *real_x >= IMG_W || *real_x < 0)
  {
      return 0;
  }
  return 1;
}


int get_pixel(int x, int y)
{
  int real_y,real_x;
  
  if (trans_coords(x, y, &real_x, &real_y))
    return img[real_y][real_x];
     
  return -1;
}


void set_pixel(int x, int y)
{
  int real_y,real_x;
  
  if (trans_coords(x, y, &real_x, &real_y))
    img[real_y][real_x] = 1;
}

void display_img()
{
	//return;
  int x, y;

  for (y = 0; y < IMG_H; y++)
  {
    for (x = 0; x < IMG_W; x++)
    {
      if (img[y][x])
        putchar('z');
      else
        putchar(',');
    }

    putchar('\n');
  }
}

int pixel_in_bounds(int x, int y)
{
  return get_pixel(x, y) != -1;
}

void flood_fill_helper(int x, int y)
{
  if (!pixel_in_bounds(x, y))
    return;
    
  if (get_pixel(x, y) == 0) 
    flood_fill(x, y);
}
void flood_fill(int x, int y)
{
  if (!pixel_in_bounds(x, y))
    return;
    
  set_pixel(x, y);
  flood_fill_helper(x, y-1);
  flood_fill_helper(x, y+1);
  flood_fill_helper(x-1, y);
  flood_fill_helper(x+1, y);
}

int main(int argc, char** argv)
{
  double t_start = 0;
  double t_end = 2.0 * M_PI;
  memset(img, 0, sizeof(img));
  //draw_curve(line_f, M_PI/2, M_PI*1.1, 0.001);
  draw_curve(line_g, t_start, t_end, 0.01);
  flood_fill(0, 0);
 // draw_curve(line_x, -IMG_W/2, IMG_W/2, 1);
  //draw_curve(line_y, -IMG_H/2, IMG_H/2, 1);
  display_img();
  return 0;
}
