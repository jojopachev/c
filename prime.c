 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 /* function calculating primes*/
int prime(int n) 
{
  int scan_n = sqrt(n);

  
  printf("prime called with n = %d scan_n = %d\n", n, scan_n);
  
  if (n == 2)
    return 1;
    
  if (n % 2 == 0)
  {
    return 0;
  }
  
  return 1; 
}

int main(int argc, char** argv)
{
  int arg_n;
  
  if (argc < 2)
  {
    fprintf(stderr, "Missing argument\n");
    exit(1);
  }
  
  arg_n = atoi(argv[1]);
  if (prime(arg_n))
  {
    printf ("Number %d is prime\n",arg_n);
  }
  else  
  {
    printf ("Number %d is not prime\n",arg_n);
  }
  
 
  return 0; 
}
