#include <stdio.h>
#include <stdlib.h>

void main(){
    int valor;

    puts("Digite um valor inteiro: ");
    scanf("%d",&valor);

    printf("O valor absoluto é: %d \n", abs(valor));
}