#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11
#define MAX_X 10

int main(){
    int X[SIZE];
    int F[MAX_X] = {0};

    srand(time(NULL));
    for(int i =0; i < SIZE;i++){
        *(X+i) = rand() % MAX_X;
    }

    puts("vetor gerado: ");
    for(int i =0; i < SIZE;i++){
        printf("%d ", *(X+i));
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < MAX_X; j++){
            if(*(X+i) == j){
                (*(F+j))++;
            }
        }
    }
    puts("vetor F: ");
    for(int i =0; i < MAX_X;i++){
        printf("%d ", *(F+i));
    }
    
    return 0;
}