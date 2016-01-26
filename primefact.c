 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 /* function calculating primefact*/
void primefact (long long int n) 
{
  long long int scan_n = sqrt(n);
  long long int i;
  int a = 0;
  
  while (n % 2 == 0)
  {
    n = n/2;
    a++;
  }
  
  if(a)
    printf("2^%d\n",a); 
 
  for (i = 3; i <= scan_n; i += 2)
  {
    a = 0;
    
    while (n % i == 0)
    {
      a ++;
      n /= i;
    }
    
    if (a)
    {
      printf("%lld^%d\n",i,a);
    }
  }
  
  if (n != 1)
   printf("%lld^1\n", n);
  
  return; 
}

int main(int argc, char** argv)
{
  long long int arg_n;
  
  if (argc < 2)
  {
    fprintf(stderr, "Missing argument\n");
    exit(1);
  }
  
 arg_n = atoll(argv [1] );
 primefact (arg_n);
 return 0;
}                
