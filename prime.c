 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 /* function calculating primes*/
 int prime(long long int n) 
{
  long long int scan_n = sqrt(n);

  int i;
  printf("prime called with n = %lld scan_n = %lld\n", n, scan_n);
  
  if (n == 2)
    return 1;
    
  if (n % 2 == 0)
  {
    return 0;
  }
  
  for ( i = 3; i <= scan_n; i += 2)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  
  return 1; 
}

int main(int argc, char** argv)
{
  long long int arg_n;
  
  if (argc < 2)
  {
    fprintf(stderr, "Missing argument\n");
    exit(1);
  }
  
  arg_n = atoll(argv[1]);
  
  if (prime(arg_n))
  {
    printf("Number %lld is prime\n",arg_n);
  }
  else  
  {
    printf ("Number %lld is not prime\n",arg_n);
  }
 
  return 0; 
}
