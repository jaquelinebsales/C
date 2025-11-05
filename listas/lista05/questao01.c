#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX 5
int main(){
    int vetor[SIZE];

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        vetor[i] = rand()%MAX;
    }

    for(int i = 0; i < SIZE; i++){
        if(vetor[i]%2==0){
            printf("Endereco de memoria do primerio elemento par no vetor: [%p]", vetor+i);
            break;
        }
    }
    return 0;
}