#include <stdio.h>

int main(){
    int valor;
    int p;
    int mask = 0x01;

    puts("Digite um numero: ");
    scanf("%d", &valor);

    puts("Digite a posicao que deseja desligar: ");
    scanf("%d", &p);

    mask = mask << (p-1);

    valor = valor & (~(mask));

    printf("O valor atualizado e: %d", valor);
}