#include <stdio.h>

void main(){
    int valor;
    puts("Digite um valor inteiro: ");
    scanf("%d",&valor);

    printf("Decimal: %d \n", valor);
    printf("Hexadecimal: %c \n", valor);
    printf("Octal: %o \n", valor);
}