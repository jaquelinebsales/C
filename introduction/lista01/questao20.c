#include <stdio.h>

void main(){
    int valor_1;
    int valor_2;

    puts("Digite o valor 1: ");
    scanf("%d",&valor_1);

    puts("Digite o valor 2");
    scanf("%d",&valor_2);

    (valor_1%valor_2)?puts("O valor 1 não é múltiplo do valor 2."):puts("O valor 1 é múltiplo do valor 2.");
}