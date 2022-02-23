#include <stdio.h>

int main(void) {
    int j=0;
    while( j<20){
        int i= 0;
        i = 1 + (rand( )%7);
        if (i == 1)
        printf("Segunda\n");
        else if (i == 2)
        printf("Terça\n");
        else if (i == 3)
        printf("Quarta\n");
        else if (i == 4)
        printf("Quinta\n");
        else if (i == 5)
        printf("Sexta\n");
        else if (i == 6)
        printf("Sabado\n");
        else if (i == 7)
        printf("Domingo\n");

        j++;
    }
}