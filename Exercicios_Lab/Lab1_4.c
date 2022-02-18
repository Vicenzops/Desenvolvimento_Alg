#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float Q, P, L, MT;
    scanf("%f", &Q);
    scanf("%f", &P);
    scanf("%f", &L);
    MT = ((2*Q)+(3*P)+(5*L))/10;
    printf("MEDIA = %.1f", MT);
}