#include <stdio.h>

int main(){
    unsigned valor;
    unsigned mask = 0x01;
    unsigned p;

    puts("Digite um número: ");
    scanf("%u", &valor);

    puts("Digite a posiçaõ que deseja ligar: ");
    scanf("%u", &p);

    mask = mask << (p-1);

    valor = valor | mask;

    printf("O valor atualizado é: %u", valor);
}