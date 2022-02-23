#include <stdio.h>

int main(void) {
    int a,n,i;
    i=0;
    while (n != 0){
        printf("Digite um valor para N: ");scanf("%d", &n);
        a = 1 +(rand()%10);
            if(n < a)
                printf("Muito Pequeno\n");
            else if (n > a)
                printf("Muito Grande \n");
            else if (n == a)
                printf("N igual a A\n");
    }
}