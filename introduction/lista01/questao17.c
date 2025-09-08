#include <stdio.h>
#include <math.h>

void main(){
    float raio;

    puts("Informe o valor do raio: ");
    scanf("%f",&raio);

    printf("Diâmetro: %fm \n", 2*raio);
    printf("Circunferência : %fm \n", 2*3.14159*raio);
    printf("Área: %fm^2 \n", 3.14159*pow(raio,2));
}