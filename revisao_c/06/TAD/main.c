#include <stdio.h>
#include "ponto.h"

int main(void){
    Ponto* p1 = cria_ponto(3, 4);
    Ponto* p2 = cria_ponto(-2, 5);

    imprime_ponto(p1);
    imprime_ponto(p2);

    printf("Quadrante de p1: %d\n", get_quadrante_ponto(p1));
    printf("Quadrante de p2: %d\n", get_quadrante_ponto(p2));

    printf("Distância entre p1 e p2: %.2f\n", distancia_entre_pontos(p1, p2));

    libera_ponto(p1);
    libera_ponto(p2);

    return 0;
}