#include <stdio.h>

void main(){
    float numerador;
    float denominador;

    puts("Digite o valor do numerador: ");
    scanf("%f", &numerador);
    
    puts("Digite o valor do denominador: ");
    scanf("%f", &denominador);

    while(denominador == 0){
        puts("O denomiador nao pode ser zero, por favor digite outro valor: ");
        scanf("%f", &denominador);
    }

    printf("A divisao de %.2f por %.2f e %.2f", numerador, denominador, numerador/denominador);
    
}