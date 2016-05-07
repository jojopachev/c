#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int growth (int n)
{
  if (n==0)
  {
    return 1;
  }
        
  if (n%2 ==0)
  {
    return growth(n-1)+1;
   }
   else
   {
     return growth(n-1)*2;
   }
} 


int main()
{
  int t;
  int h;
  int a0 = 0;
  scanf("%d",&t);
  
  for(a0 = 0; a0 < t; a0++)
  {
     int n; 
     scanf("%d",&n);
     printf("%d\n", growth(n));
  } 
    
  return 0;
}
