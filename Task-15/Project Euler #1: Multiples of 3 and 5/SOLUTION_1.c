/*THIS IS THE SOLUTION MADE BY ME FOR THE QUESTION "Project Euler #1: Multiples of 3 and 5" FOR TASK-15
MOST/all THE HEADER FILES IN THIS CODE ARE USELESSEXCEPT FOR THE HEADER FILE SHOWN SEPARATELY
JUST LEFT THEM AS THEY WERE GIVEN WITH THE QUESTION�.*/
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
