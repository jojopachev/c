#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int x_1, x_2, y_1, y_2, x_3, y_3;
  int n;
  scanf("%d", &n);
  int i;
  
  for(i = 0; i < n; i++)
  {
    scanf("%d %d", &x_1, &y_1);
    scanf("%d %d", &x_2, &y_2);
    x_3 = x_2*2-x_1;
    y_3 = y_2*2-y_1;
    printf("%d %d\n", x_3, y_3);
  }
  
  return 0;
}
