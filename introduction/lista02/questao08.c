#include <stdio.h>

void main(){
    float valor_mercadoria;
    float entrada;
    int prestacoes;

    puts("Digite o valor da mercadoria: ");
    scanf("%f",&valor_mercadoria);

    prestacoes = valor_mercadoria/3;
    entrada = valor_mercadoria - prestacoes*2;

    printf("O valor da entrada e das prestacoes respectivamente sao: %.2f, %d",entrada, prestacoes);
}