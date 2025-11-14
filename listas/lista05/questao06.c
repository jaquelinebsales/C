#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 5
#define MAX 10
float erroMedioQuadratico(int *a, int *b);

int main(){
    int A[N], B[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++){
        A[i] =  rand()%MAX;
        B[i] =  rand()%MAX;
    }
    
    puts("Vetor A gerado: ");
    for(int i = 0; i < N; i++){
        printf("%5d", A[i]);
    }
    puts("");

    puts("Vetor B gerado:");
    for(int i = 0; i < N; i++){
        printf("%5d", B[i]);
    }
    puts("");


    printf("Erro medio quadratico: %.2f", erroMedioQuadratico(A, B));
    return 0;
}

float erroMedioQuadratico(int *a, int *b){
    float MSE = 0;
    for(int i = 0; i < N; i++){
        MSE += pow((*(a+i) - *(b+i)),2);
    }
    MSE *= (float)1/N;

    return MSE;
}