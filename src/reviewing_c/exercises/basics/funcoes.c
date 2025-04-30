#include <stdio.h>

int quadrado(int a);

int main(void){

    printf("%d", quadrado(2));
    return 0;
}

int quadrado(int a){
    return a*a;
}