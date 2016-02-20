#include<stdio.h>
#include<stdlib.h> 
char last_char(char* s)
{
    
  if (!*s)
  {
    return 0;
  }
  
  for(;*s;s++)
  {
    
  }
    
  return *--s;
}

int main(int argc, char** argv)
{   
  double t = 0;
  
  if (argc < 2)
  {
    fprintf(stderr, "Missing argument\n");
    exit(1);
  }

  t = atof(argv[1]);
  char c_last = last_char(argv[1]);  
  double res = 0;
  char mode; 
    
  if (c_last == 'f' || c_last == 'F')
  {
    res = (t - 32)/1.8;
    mode = 'C';   
  }   
  else
  {
    res = 1.8*t + 32;     
    mode = 'F';
  }
  
  printf("%.2f%c\n", res, mode);
  return 0;
}
