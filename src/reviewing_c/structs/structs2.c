#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(void){

    struct Pessoa p = {"Wilson", "Rua 5", 19, 616};

    // strcpy(p.nome, "Ricardo");
    // strcpy(p.rua, "Rua 1");
    // p.idade = 21;
    // p.numero = 101;
    
    printf("Nome: %s\nRua: %s\nIdade: %d\nNumero: %d\n", p.nome, p.rua, p.idade, p.numero);
    return 0;
}