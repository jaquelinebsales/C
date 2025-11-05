#include <stdio.h>

int main(){
    int valor1, valor2, valor3;
    int *p1 = &valor1, *p2 = &valor2, *p3 = &valor3;

    puts("Digite um valor: ");
    scanf("%d", p1);
    puts("Digite outro valor: ");
    scanf("%d", p2);

    *p3 = *p1;
    *p1 = *p2;
    *p2 = *p3;

    printf("valor1: %d \n", *p1);
    printf("valor2: %d \n", *p2);

    return 0;
}