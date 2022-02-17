#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int HS,HH,MM,SS,TEMPO;
    HS = 3600;
    scanf("%d", &TEMPO);
    HH = TEMPO/HS;
    MM = (TEMPO -(HS*HH))/60;
    SS = (TEMPO -(HS*HH)-(MM*60));
    
    printf("%d:%d:%d", HH,MM,SS);
    return(0);
}