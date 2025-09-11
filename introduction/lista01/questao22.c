#include <stdio.h>

void main(){
    int numero;
    int primeiro_digito;
    int segundo_digito;
    int terceiro_digito;

    puts("Digite um número: ");
    scanf("%d",&numero);

    primeiro_digito = numero % 10;
    printf("O primeiro digito e: %d \n", primeiro_digito);

    segundo_digito = ((numero % 100) - primeiro_digito)/10;
    printf("O segundo digito e: %d \n", segundo_digito);

    terceiro_digito = (numero - ((segundo_digito*10) + primeiro_digito))/100;
    printf("O terceiro digito e: %d \n", terceiro_digito);

    numero = (primeiro_digito*100)+(segundo_digito*10)+(terceiro_digito);

    printf("O numero com os digitos invertidos e: %d", numero);

}