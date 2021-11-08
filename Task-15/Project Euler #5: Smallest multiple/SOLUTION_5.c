/*
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int T, N, product;
    scanf("%d", &T);
    for (int a0= 0; a0 < T; a0++) {
        product = 1;
        scanf("%d", &N);
        for (int number = 2; number <= N; number++) {
            product *= number / gcd(product, number);
        }
        printf("%d\n", product);
    }
    return 0;
}

int gcd(int a, int b) {
    if (b != 0) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}

