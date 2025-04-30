/*

Fibonacci III
Na matemática, a Sequência de Fibonacci, é uma sequência de números inteiros, começando por 0, na qual, cada termo subsequente corresponde à soma dos dois anteriores. Os números de Fibonacci são, portanto, os números que compõem a seguinte sequência: 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,⋯

Após dominar o uso de funções recursivas envolvendo fibonacci, você ficou com uma pergunta na cabeça: "Quantas vezes cada chamada para a função fibonacci é realizada para cada número menor que n
?" Para ajudar a responder a essa pergunta, você tentou uma abordagem mais visual que ficou da seguinte forma


Perceba que ela começa pelo valor que você deseja calcular (Fibonacci de 4). Essa chamada gera outras duas chamadas para Fibonacci de 2 e 3. A chamada de Fibonacci de 2 gera as chamadas de Fibonacci de 1 e 0 enquanto a chamada de Fibonacci de 3 gera as chamadas de Fibonacci de 2 e 1. Por fim, a chamada de Fibonacci de 2 gera as chamadas de Fibonacci de 1 e 0.

Para não precisar sempre desenhando, o nosso professor mestre das artes marciais pediu a sua ajuda para implementar a um programa que conte quantas vezes cada chamada da função fibonacci(n) é realizada, para cada valor de entrada diferente da função fibonacci(n) é chamada em sua implementação recursiva.

Entrada
A entrada é um valor inteiro 0≤n≤30
, indicando n
-ésimo termo da Sequência.

Saída
A saída deve conter uma linha com um inteiro indicando o n
-ésimo termo da sequência de fibonacci, e em seguida outras n+1
 linhas com os quantitativos de vezes em que cada função é chamada para um determinado valor menor ou igual a n
, conforme os exemplos.

Por exemplo:

Input	Resultado
0
fibonacci(0) = 0.
1 chamada(s) a fibonacci(0).
1
fibonacci(1) = 1.
0 chamada(s) a fibonacci(0).
1 chamada(s) a fibonacci(1).
4
fibonacci(4) = 3.
2 chamada(s) a fibonacci(0).
3 chamada(s) a fibonacci(1).
2 chamada(s) a fibonacci(2).
1 chamada(s) a fibonacci(3).
1 chamada(s) a fibonacci(4).

*/


#include <stdio.h>

int main(void){

    return 0;
}