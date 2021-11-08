//
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int T; 
    long int a,b,c,s;
    scanf("%d",&T);
    for(int a0 = 0; a0 < T; a0++){
        long N; 
        scanf("%ld",&N);
        a=1,b=2,c=3,s=2;
        while (c < N) {
            if (c % 2 == 0) {
                s+= c;
            }
            a = b; b = c; c = a+b;
        }
        printf("%ld\n", s);
    }
    return 0;
}
