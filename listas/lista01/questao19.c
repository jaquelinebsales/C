#include <stdio.h>

void main(){
    int valor;

    puts("Digite um número: ");
    scanf("%d",&valor);
    (valor % 2)?puts("Esse número é ímpar"):puts("Esse número é par");
}