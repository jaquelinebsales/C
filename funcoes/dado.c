/*Lançando um dado de seis lados*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int main(){
    int valor;
    int vetor[TAM] = {0};

    for(int i = 0; i<=20; i++){
        valor = 1+(rand()%6);
        printf("%d \n", valor);

        for(int j = 1; j<=TAM; j++){
            if(valor == j){
                vetor[j-1] += 1; 
            }
        }
    }

    puts("Quantidade de vezes que caiu cada número: ");
    for(int i = 0; i<TAM; i++){
        printf("O número %d caiu %d vezes \n", i+1, vetor[i]);
    }
    return 0;
}