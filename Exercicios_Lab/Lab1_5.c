#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int VAL, C, CI, V, D, CC, DO, U;
    scanf("%d", &VAL);
    C = VAL/100;
    VAL -= 100*C;
    CI = VAL/50;
    VAL -= 50*CI;
    V = VAL/20;
    VAL -= 20*V;
    D = VAL/10;
    VAL -= 10*D;
    CC = VAL/5;
    VAL -= 5*CC;
    DO = VAL/2;
    VAL -= 2*DO;
    U = VAL/1;
    VAL -= 1*1;
    printf("%d nota(s) de R$ 100,00 \n", C);
    printf("%d nota(s) de R$ 50,00\n", CI);
    printf("%d nota(s) de R$ 20,00\n", V);
    printf("%d nota(s) de R$ 10,00\n", D);
    printf("%d nota(s) de R$ 5,00\n", CC);
    printf("%d nota(s) de R$ 2,00\n", DO);
    printf("%d nota(s) de R$ 1,00\n", U);
}