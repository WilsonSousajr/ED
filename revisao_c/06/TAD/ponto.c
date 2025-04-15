#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

struct Ponto{
    float x,y;
};


Ponto* cria_ponto(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));

    if(p != NULL){
        p->x = x;
        p->y = y;
    }

    return p;
}

void imprime_ponto(Ponto* p){
    if(p != NULL){
        printf("Ponto(%.2f, %.2f)\n", p->x, p->y);
    }
}

int get_quadrante_ponto(Ponto* p){
    if(p == NULL) return 0;

    if(p->x > 0 && p->y > 0) return 1;
    if(p->x < 0 && p->y > 0) return 2;
    if(p->x < 0 && p->y < 0) return 3;
    if(p->x > 0 && p->y < 0) return 4;
    return 0;
}  

float distancia_entre_pontos(Ponto* p1, Ponto* p2){
    if(p1 == NULL || p2 == NULL) return -1;

    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;

    return sqrt(dx*dx + dy*dy);
}

void libera_ponto(Ponto* p){
    if(p != NULL){
        free(p);
    }
}




