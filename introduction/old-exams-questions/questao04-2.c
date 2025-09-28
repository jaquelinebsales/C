#include <stdio.h>
/*Inversão de sinal*/
int main(){
    char x;

    puts("Digite um numero: ");
    scanf("%hhd", &x);

    char y = ~x + 1;

    printf("Output: %hhd \n", y);

    return 0;
}