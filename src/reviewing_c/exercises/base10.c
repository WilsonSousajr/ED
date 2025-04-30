#include <stdio.h>

int imprime_base2(int numer_base10){

    if(numer_base10 == 0){
        printf("0");
    }else{
        int div2 = numer_base10 / 2;
        int resto = numer_base10 % 2;

        if(div2 > 0){
            imprime_base2(div2);
        }else{
            printf(" ");
        }
        printf("%d\n", resto);

    }
}

int main(void){

    int numero_base10;
    scanf("%d", &numero_base10);

    imprime_base2(numero_base10);
    return 0;
}