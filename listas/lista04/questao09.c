#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX 10
int main(){

    int vetor[SIZE], lucas, cont = 0;

    srand(time(NULL));
    for(int i =0; i < SIZE; i++){
        *(vetor+i) = rand() % MAX;
    }

    for(int i =0; i< SIZE; i++){
        printf("%d ", vetor[i]);
    }

    for(int pass = 0; pass < SIZE; pass++){
        for(int i = 0; i < (SIZE-1); i++){
            if(*(vetor+i) > *(vetor+i+1)){
                lucas = *(vetor+i);
                *(vetor+i) = *(vetor+i+1);
                *(vetor+i+1) = lucas;
            }else{
                cont++;
            }
        }
    }

    puts("Vetor ordenado: ");
    for(int i =0; i< SIZE; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}