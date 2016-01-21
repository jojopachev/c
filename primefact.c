 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 /* function calculating primefact*/
void primefact (long long int n) 
{
  long long int scan_n = sqrt(n);
  int i;
  int a = 0;
  printf ("primefact called with n = %lld scan_n = %lld\n", n, scan_n);
  
  if (n == 2)
    return;
  
  while (n % 2 == 0)
  {
    n = n/2;
    a++;
  }
  printf("2^%d\n",a);
  if (n % 2 == 0)
  {
    
  }
 
  for (i = 3; i <= scan_n; i += 2)
  {
    if (n % i == 0)
    {
      printf ("%d\n",i);
      return
    }
  }
  
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
  
 
   
                
