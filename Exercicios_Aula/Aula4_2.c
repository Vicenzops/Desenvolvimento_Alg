#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float i, NOTA, MEDIA;
    i=1;
    MEDIA=0;
    while(i<=4){
        printf("Digite sua %.f° nota: ", i);scanf("%f", &NOTA);
        MEDIA = NOTA + MEDIA;
        i++;
    }
    printf("Média = %.1f", MEDIA/4);
}