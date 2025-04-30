#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};

struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender // ender = nome da variavel, endereco = tipo que defini ali em cima;
};

int main(void){
    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 212;
    
    return 0;
}