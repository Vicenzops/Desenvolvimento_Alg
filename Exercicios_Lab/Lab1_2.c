#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float a,b,c,s;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    s = -b/(2*a);
    printf("%.4f", s);
}
