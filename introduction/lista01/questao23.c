#include <stdio.h>

void main(){
    int n;
    int x;
    int resultado;

    puts("Digite um valor x: ");
    scanf("%d", &x);

    puts("Digite um valor n: ");
    scanf("%d", &n);

    resultado = x << n;

    printf("A multiplicacao de %d por 2 elevado a %d e: %d", x, n, resultado);
}