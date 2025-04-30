#include <stdio.h>

struct student{
    char nome[20];
    int nota;
    int idade;
};

int main(void){
    struct student aluno;
    printf("Digite o nome do aluno: ");
    scanf("%19s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno: ");
    scanf("%d", &aluno.nota);

    printf("\n: %s | %d anos | Nota: %d\n", aluno.nome, aluno.idade, aluno.nota);
    return 0;
}