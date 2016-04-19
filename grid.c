#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int r = 0;
  int c = 0;
  int g = 0;
  scanf("%d",&r);
  scanf("%d",&c);
  g = (r-1)/2*10 + (r-1)%2 + 2*(c-1); 
    printf("%i\n", g);
  return 0;
}

