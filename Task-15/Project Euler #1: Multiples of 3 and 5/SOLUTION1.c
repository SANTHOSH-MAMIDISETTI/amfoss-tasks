
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int t,n,m3,m5,m15,s=0,a,b,c; 
    scanf("%ld",&t);
    for(int a0 = 0; a0 < t; a0++){
     
        scanf("%ld",&n);
        m5=(n-1)/5;
        m15=(n-1)/15;
        m3=(n-1)/3;
        a=3*m3*(m3+1)/2;
        b=5*m5*(m5+1)/2;
        c=15*m15*(m15+1)/2;
        s=a+b-c;
       printf("%ld\n", s);

    }
    return 0;
}
