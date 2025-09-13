#include <stdio.h>
#include <math.h>
void main(){
    int x1;
    int x2;
    int y1;
    int y2;
    float distancia;

    puts("Informe a coordenada x do ponto 1: ");
    scanf("%d",&x1);
    puts("Informe a coordenada y do ponto 1: ");
    scanf("%d",&y1);
    puts("Informe a coordenada x do ponto 2: ");
    scanf("%d",&x2);
    puts("Informe a coordenada y do ponto 2: ");
    scanf("%d",&y2);

    distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    printf("O distancia entre os pontos e: %.2f",distancia);
}