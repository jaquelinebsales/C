#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX 5
int main(){
    int vetor[SIZE], *pares[2];

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        vetor[i] = rand()%MAX;
    }

    for(int i = 0; i < SIZE; i++){
        if(vetor[i]%2==0){
            *pares = (vetor+i);
            printf("Endereco de memoria do primeiro elemento par no vetor: [%p] \n", pares);
            break;
        }
    }

    for(int i = (SIZE-1); i >= 0 ; i--){
        if(vetor[i]%2==0){
            *(pares+1) = (vetor+i);
            printf("Endereco de memoria do ultimo elemento par no vetor: [%p]", pares+1);
            break;
        }
    }
    return 0;
}