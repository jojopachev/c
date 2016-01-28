#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
  int i = 0;  
  int* arr;
  
  for (i = 0; i < argc; i++)
  {
    printf("argv[%d] = %s\n",i,argv[i]);     
  }
  
  if (argc)
  {
    arr = (int*)malloc(argc * sizeof(int));
    
    if (!arr)
    {
      fprintf("stderr of memory\n");
      exit(1);
    }
  }
  return 0;
}
