#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[20];
    int idade;
    char nascimento[11];

    printf("Insira seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Data de nascimento: ");
    fgets(nascimento, sizeof(nascimento), stdin);

    printf("\n Nome completo: %s \n", nome);
    printf("Idade: %d\n", idade);
    printf("Data de nascimento: ");
    puts(nascimento);

    return 0;
}