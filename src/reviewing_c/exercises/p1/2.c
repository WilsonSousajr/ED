/*

Um professor de Estrutura de Dados anda muito frustrado com o atraso dos alunos, e decidiu um critério para cancelar a aula ( considerando a matéria como dada). A aula ocorrerá se houverem pelo menos  metade do número de alunos matriculados na hora do início da aula. Se houver um número ímpar de alunos matriculados, o valor é arredondado superior (ou para cima). Dado o atraso de cada aluno,  determine se a aula será cancelada. O atraso de cada aluno é calculado subtraindo sua hora de chegada da hora de início da aula: Se atraso é negativo ou zero, o aluno é considerado presente no início da aula; se o atraso é positivo, ele chegou atrasado.

Exemplo 1:

n (número de alunos da turma) = 5

atraso = {-2, -1, 0, 2, 3}

Os três primeiros alunos chegaram na hora. Mas os dois últimos chegaram atrasados. O limite é de 3 alunos (metade de 5 arredondado pra cima), por isso a aula vai continuar, e o programa deve mostrar NAO, ou seja não haverá cancelamento da aula.

Entrada

A primeira linha contém o número de alunos matriculados

A segunda linha contém  números inteiros, separados por espaço, que descrevem os tempos de atraso de cada aluno.

Saída

A saída mostra SIM ou NAO como resposta ao cancelamento da aula.



Por exemplo:

Input	Resultado
5
-2 -1 0 2 3
NAO

*/

#include <stdio.h>

int main(void){
    int numero_alunos;
    int limite;
    int atrasados = 0;

    scanf("%d", &numero_alunos);

    if(numero_alunos % 2 != 0){
        limite = (numero_alunos / 2) + 1;
    }
    else{
        limite = numero_alunos / 2;
    }


    int atraso_alunos[numero_alunos];

    for(int i = 0; i < numero_alunos; i++){
        scanf("%d", &atraso_alunos[i]);
    }

    for(int i = 0; i < numero_alunos; i++){
        if(atraso_alunos[i] <= 0){
            atrasados++;
        }
    }


    if(atrasados >= limite){
        printf("NAO\n");
    }
    else{
        printf("SIM\n");
    }

    return 0;
}