#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N 7
#define MAX 11
int main(){
    int x[TAM], y[TAM], matriz[N][N] = {0}, var_aux;

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        x[i] = rand() % N;
        var_aux = rand() % 11;
        printf("variavel auxiliar: %d \n", var_aux);
        if(var_aux <= 3){
            y[i] = x[i];
        }else if(var_aux <= 5){
            y[i] = x[i] - 1;
        }else if(var_aux <= 7){
            y[i] = x[i] + 1;
        }else if(var_aux <= 9){
            y[i] = x[i] - 2;
        }else if(var_aux <= 10){
            y[i] = x[i] = 2;
        }

        if(y[i]>N){
            y[i] = N;
        }

        if(y[i]<0){
            y[i] = 0;
        }
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