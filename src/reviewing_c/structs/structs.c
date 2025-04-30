#include <stdio.h>

struct Carro{
    char nome[20];
    int ano;
    float quilometragem;
};


int main(void){

    struct Carro carro_1;

    scanf("%s", carro_1.nome);
    carro_1.ano = 2005;
    carro_1.quilometragem = 20.253;

    printf("Nome do carro: %s\n", carro_1.nome);
    printf("Ano do carro: %d\n", carro_1.ano);
    printf("Quilometragem do carro: %f\n", carro_1.quilometragem);

    return 0;
};