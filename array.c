#include<stdio.h>
#include<stdlib.h>

int arr_sum(int* a, int n)
{
  return 0;
}
 
int main(int argc, char** argv)
{
  int i = 0;  
  int* arr;
  
  
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
    
    for (i = 1; i < argc; i++)
    {
      arr[i-1] = atoi(argv[i]);
      printf("%d\n", arr[i-1]);
    }
    printf("arr = %d\n", arr_sum(arr, argc - 1));
    free(arr);
  }
  return 0;
}
