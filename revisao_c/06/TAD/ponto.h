#ifndef PONTO_H
#define PONTO_H

typedef struct Ponto Ponto;

Ponto* cria_ponto(float x, float y);
void imprime_ponto(Ponto* p);
int get_quadrante_ponto(Ponto* p);
float distancia_entre_pontos(Ponto* p1, Ponto* p2);
void libera_ponto(Ponto* p);


#endif