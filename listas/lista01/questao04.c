#include <stdio.h>

void main(){

    float conta;
    float total;

    puts("Digite o valor total a ser pago: ");
    scanf("%f",&conta);

    total = conta + ((conta*10)/100);

    printf("Total a ser pago: R$%.2f",total);
}