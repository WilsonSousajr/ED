/*

Tralalero Tralalá,  um matemático iniciante, não possui muita familiaridade com o universo humano e está aprendendo a operação de adição.

Sua professora escreveu uma soma com vários números. Os alunos devem calcular o resultado. Para facilitar, a soma contém apenas os números 1, 2, 3 e 4. Mesmo assim, isso ainda é difícil para Tralalero. Como está começando a aprender, ele só consegue calcular a soma se as parcelas estiverem em ordem não decrescente. Por exemplo:

Ele não consegue calcular 1+3+2+4, mas

Ele consegue calcular 1+1+2 e 3+3.

Sua tarefa é reorganizar as parcelas da soma escrita no quadro e imprimi-la de forma que Tralalero consiga calcular.

Entrada
A primeira linha contém uma string não vazia s — a soma que Tralalero precisa calcular. A string s não tem espaços, contém apenas dígitos (1, 2, 3 e  4 ) e o caractere "+". Além disso, s é uma soma válida de números 1, 2, 3 e 4. O comprimento máximo de s é 100 caracteres.

Saída
Imprima a nova soma que Tralalero consegue calcular

Por exemplo:

Input	Resultado
4+3+2+1
1+2+3+4
1+1+3+1+2
1+1+1+2+3

*/

#include <stdio.h>

#define MAX_S 100

int main(void){
    char s[MAX_S];

    scanf("%s", s);

    return 0;
}