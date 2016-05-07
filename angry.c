#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    int a0;
    scanf("%d",&t);
    for(a0 = 0; a0 < t; a0++)
    {
        int n; 
        int a_i;
        int c_e = 0;
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(a_i = 0; a_i < n; a_i++)
        {   
           scanf("%d",&a[a_i]);
           //printf(" %i\n", a_i);
           if (a[a_i] <= 0)
           {
             c_e++;
           }
        }
        
        if (c_e < k)
        {
          printf("YES\n");
        } 
        else
        {
          printf("NO\n");
        }
    }   
    
    return 0;
}

