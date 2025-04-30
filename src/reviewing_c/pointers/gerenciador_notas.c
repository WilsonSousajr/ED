#include <stdio.h>

float calcula_media(float notas[], int numero_de_alunos){
    float soma;
    float result;

    for(int i = 0; i < numero_de_alunos; i++){
        soma += notas[i];
    }

    result = soma / numero_de_alunos;

    return result;
}

float ajusta_nota(float notas[], int indice_aluno, float aumento){
    float nota_atual = notas[indice_aluno];

    if(nota_atual + aumento > 10.0){
        return -1;
    }
    else{
        nota_atual += aumento;
        return nota_atual;
    }
}

int main(void){
    int numero_de_alunos;
    int indice_aluno;
    float aumento;

    printf("Digite o número de alunos da turma: ");
    scanf("%d", &numero_de_alunos);

    float notas[numero_de_alunos];

    printf("Digite as notas dos alunos: ");
    for(int i = 0; i < numero_de_alunos; i++){
        scanf("%d", &notas[i]);
    }

    printf("Digite o indice do aluno a ter a nota alterada: ");
    scanf("%d", &indice_aluno);

    printf("Digite o valor do aumento para o aluno: ");
    scanf("%f", &aumento);

    float media = calcula_media(notas, numero_de_alunos);

    printf("Média anterior: %.2f\n", media);

    return 0;
}