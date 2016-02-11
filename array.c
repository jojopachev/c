#include<stdio.h>
#include<stdlib.h>

int arr_sum(int* a, int n)
{
  int i = 0;
  int s = 0;
  
  for (i = 0; i < n; i++)
  {
    s += a[i];
  }
 
  return s;
}
 
int main(int argc, char** argv)
{
    
  int* arr;
  int i = 0;
  
  for (i = 0; i < argc; i++)
  {
    printf("argv[%d] = %s\n",i,argv[i]);     
  }
  
  argc --;
  
  if (argc)
  {
    arr = (int*)malloc(argc * sizeof(int));
    
    if (!arr)
    {
      fprintf(stderr, "out of memory\n");
      exit(1);
    }
    
    for (i = 0; i <= argc; i++)
    {
      arr[i-1] = atoi(argv[i]);
      printf("%d\n", arr[i-1]);
    }
    
    printf("arr_sum = %d\n", arr_sum(arr, argc));
    free(arr);
  }
  
  return 0;
}
