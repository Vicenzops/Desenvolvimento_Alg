#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float C, F;
    printf("Digite uma temperatura em Celsius: ");scanf("%f", &C);
    F = (9 * C + 160) / 5;
    printf("A temperatura em Fahrenheit é %.2f", F);
}