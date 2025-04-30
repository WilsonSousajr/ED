#include <stdio.h>

struct Pessoa{
    char nome[50], rua[50];
    int idade, numero;
};

int main(void){
    // struct Pessoa p1, p2, p3, p4;

    struct Pessoa p[4];

    p[0].idade = 15;
    scanf("%s", p[1].nome);

    // etc...

    return 0;
}