#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 20

float somar(float *);

int main(){
    float vetor[TAM];

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        vetor[i] = (float)rand()/RAND_MAX*MAX;
    }

    printf("Soma: %.2f", somar(vetor));
    return 0;
}

float somar(float *Vetor){

    float soma = 0;
    for(int i = 0; i< TAM; i++){
        soma+=Vetor[i];
    }

    return soma;
}