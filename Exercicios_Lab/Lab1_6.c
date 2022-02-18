#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int Q, P, C,D,U;
    scanf("%d", &Q);
    C = Q/100;
    D = (Q-(C*100))/10;
    U = (Q-(C*100)-(D*10))/1;
    P = (C+(3*D)+(5*U))%7;
    printf("%d%d%d%d", C,D,U,P);
}