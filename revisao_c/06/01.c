#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nome[20];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Você digitou o nome: %s", nome);
    fputs(nome, stdout);

    return 0;
}