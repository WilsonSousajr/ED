/*

Em um grande campo viviam coelhos e uma raposa. A raposa quer devorar um coelho, enquanto o coelho quer fugir da raposa por um dos muitos buracos que possui no campo. Tanto a raposa quanto o coelho não são especialistas em matemática, mas também não são completamente estúpidos.  O coelho escolhe um buraco e segue em direção a ele em linha reta e a uma velocidade constante. A raposa, que é muito boa em leitura de linguagem corporal, segue no mesmo instante em direção ao mesmo buraco escolhido pelo coelho, em linha reta e a uma velocidade igual ao dobro da velocidade do coelho. Se a raposa atinge o buraco primeiro ela devora o coelho, caso contrário o coelho escapa. Seu objetivo é escolher um buraco pelo qual o coelho possa escapar, se tal buraco existir.

A entrada consiste de vários casos de teste. A primeira linha de cada caso contém um inteiro e quatro números em ponto flutuante. O inteiro n denota o número de buracos presentes no campo para esse caso de teste e os quatro números em ponto flutuante denotam as coordenadas (x, y) do coelho seguidas das coordenadas (x, y) da raposa. Na sequência, são mostrados n linhas com dois números em ponto flutuante: as coordenadas (x, y) de cada um dos buracos. Todas as distâncias estão em metros. 

Para cada caso, se o coelho puder fugir, a saída deve conter a frase ``O coelho pode escapar pelo buraco (x,y)''. Caso contrário, a saída deve conter a frase ``O coelho nao pode escapar''. Se o coelho puder escapar por mais de um buraco, mostre na saída o buraco que aparece em primeiro lugar na entrada. Não há mais que 1000 buracos em cada caso de teste e todas as coordenadas variam entre -10000 e +10000. A saída é sempre exibida com 3 casas decimais.

O arquivo com a resposta será compilado com "-lm", portanto você pode usar a biblioteca math.h (se achar necessário).

Por exemplo:

Input	Resultado
1 1.000 1.000 2.000 2.000
1.500 1.500
O coelho nao pode escapar.
2 2.000 2.000 1.000 1.000
1.500 1.500
2.500 2.500
O coelho 

*/

#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
} coelho;

typedef struct{
    float x;
    float y;
} raposa;

typedef struct{
    float x;
    float y;
}buraco;

int main(void){
    int numero_de_buracos;
    float distancia_coelho_buraco;
    float distancia_raposa_buraco;
    coelho Coelho;
    raposa Raposa;
    int pode_fugir = 0;
    buraco escape;


    scanf("%d %f %f %f %f", &numero_de_buracos, &Coelho.x, &Coelho.y, &Raposa.x, &Raposa.y);

    buraco buracos[numero_de_buracos];

    for(int i = 0; i < numero_de_buracos; i++){
        scanf("%f %f", &buracos[i].x, &buracos[i].y);
    }

    // printf("%d %.3f %.3f %.3f %.3f\n", numero_de_buracos, Coelho.x, Coelho.y, Raposa.x, Raposa.y);

    // for(int i = 0; i < numero_de_buracos; i++){
    //     printf("%.3f .%.3f\n", buracos[i].x, buracos[i].y);
    // }

    for(int i = 0; i < numero_de_buracos; i++){
        float dxc = Coelho.x - buracos[i].x;
        float dyc = Coelho.y - buracos[i].y;
        float dxr = Raposa.x - buracos[i].x;
        float dyr = Raposa.y - buracos[i].y;

        distancia_coelho_buraco = sqrt(dxc*dxc + dyc*dyc);
        distancia_raposa_buraco = (sqrt(dxr*dxr + dyr*dyr)) / 2;

        if(distancia_coelho_buraco < distancia_raposa_buraco){
            pode_fugir = 1;
            escape.x =  buracos[i].x;
            escape.y = buracos[i].y;
            break;
        }
    }

    if(pode_fugir == 0){
        printf("O coelho nao pode escapar.\n");
    }
    else{
        printf("O coelho pode escapar pelo buraco (%.3f,%.3f).", escape.x, escape.y);
    }
    return 0;
}