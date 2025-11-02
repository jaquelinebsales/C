#include <stdio.h>

void main(){
    int fatorial = 1;

    for(int i = 1; i<=10; i++){
        if(i%2!=0){
            fatorial *= i;
        }
    }

    printf("O fatorial dos numeros impares de 1 ate 10 e: %d", fatorial);
}