#include <stdio.h>

int main(){
    int valor;
    int mask = 0x01;
    int p;

    puts("Digite um valor: ");
    scanf("%d", &valor);

    puts("Digite a posicao que deseja inverter: ");
    scanf("%d", &p);

    mask = mask << (p-1);

    valor = valor ^ mask;

    printf("O valor atualizado e: %d", valor);
}