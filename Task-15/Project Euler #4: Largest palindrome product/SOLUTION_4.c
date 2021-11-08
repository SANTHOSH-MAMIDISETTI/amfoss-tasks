/*THIS IS THE SOLUTION MADE BY ME FOR THE QUESTION "Project Euler #4: Largest palindrome product" FOR TASK-15.*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
        int T, N, la, li, sta, ste, tmp, p, rev;
    scanf("%d",&T);
    for(int a0 = 0; a0 < T; a0++){
        int n; 
        scanf("%d",&N);
   
        la = 0;
        li = N - 1;
        for (int n1 = 999; n1 > 100; n1--) {
            if (n1 % 11 != 0) {
                tmp = li / n1 / 11 * 11;
                sta = 990 < tmp ? 990 : tmp;
                ste = -11;
            } else {
                tmp = li / n1;
                sta = 999 < tmp ? 999 : tmp;
                ste = -1;
            }
            for (int n2 = sta; n2 > n1; n2 += ste) {
                p = n1 * n2;
                if (p <= la) {
                    break;
                }
                rev = 0;
                tmp = p;
                while (tmp != 0) {
                    rev *= 10;
                    rev += tmp % 10;
                    tmp /= 10;
                }
                if (rev == p) {
                    la = p;
                    break;
                }
            }
        }
        printf("%d\n", la);
    }
    return 0;
}
