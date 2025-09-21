#include <stdio.h>

void main(){
    unsigned long long num;
    unsigned long long variavel_auxiliar;
    int tamanho = 0;
    int counter = 0;

    puts("Digite um numero: ");
    scanf("%llu",&num);

    variavel_auxiliar = num;
    while (variavel_auxiliar != 0){
        tamanho++;  
        variavel_auxiliar /= 10;  
    }

    variavel_auxiliar = num;
    for(int i = (tamanho - 1); i>=0 ; i--){
        if (variavel_auxiliar%10 == 7){
            counter++;
        }
        variavel_auxiliar /= 10;
    }

    printf("O numero %llu tem %d numeros 7.", num, counter);
    
}