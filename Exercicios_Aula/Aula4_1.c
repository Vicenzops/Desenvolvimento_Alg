#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    for(i=0 ;i < 101; i++){
        if(i%3==0)
        printf("%d\n", i);
    }
}

int main() {
    for(int i=0; i<=100; i+=3)
        printf("%d\n", i);
}