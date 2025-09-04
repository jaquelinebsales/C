#include <stdio.h>

void main(){
    
    float valor;

    puts("Digite um valor real: ");
    scanf("%f",&valor);

    printf("O valor com duas casas decimais: %.1f", valor);
}