#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11
#define TAM 10
int main(){
    int X[TAM];
    int Y[TAM];
    int M[N][N] = {0};

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        X[i] = rand() % N;
        Y[i] = rand() % N;
    }

    for(int i = 0; i < TAM; i++){
        M[X[i]][Y[i]]++;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0;  j < N; j++){
            printf("%5d", M[i][j]);
        }
        puts("");
    }
    return 0;
}