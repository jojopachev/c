#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n; 
    scanf("%d",&n);
    long long int arr[n];
    long long int arr_i;
    long long int s = 0;
    
    for( arr_i = 0; arr_i < n; arr_i++)
    {     
       scanf("%lld",&arr[arr_i]);
       s += arr[arr_i];
    } 
    
    printf("%lld\n", s);
    return 0;
}

