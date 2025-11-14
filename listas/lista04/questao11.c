#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N 7
int main(){
    int x[TAM], y[TAM], matriz[N][N] = {0};

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        x[i] = rand() % N;
        y[i] = rand() % N;
    }

    puts("Vetor x:");
    for(int i = 0; i < TAM; i++){
        printf("%5d", x[i]);
    }
    puts("");
    puts("Vetor y:");
    for(int i = 0; i < TAM; i++){
        printf("%5d", y[i]);
    }

    int linha, coluna;
    for(int i = 0; i < N; i++){
        linha = x[i];
        coluna = y[i];
        matriz[linha][coluna]++;
    }

    puts("");
    puts("Matriz gerada: ");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%5d", matriz[i][j]);
        }
        puts("");
    }

    return 0;
}