#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
} pessoa;

int main(void){
    pessoa p;

    scanf("%s\n", p.nome);
    scanf("%d", &p.idade);

    printf("Nome: %s\nIdade: %d\n", p.nome, p.idade);
    return 0;
}