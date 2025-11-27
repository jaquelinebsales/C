#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 11
#define MAX 100

float erroMedioQuadradico(int n, int y[], int x[]);
float erroAbsolutoMedio(int n, int y[], int x[]);
float funcaoCalcularErro(int n, int y[], int x[], float(funcaoErro)(int, int [], int[]));

int main(){
    int A[N], B[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++){
        A[i] = rand()%MAX;
        B[i] = rand()%MAX;
    }

    puts("Calculando por erro médio quadrático: ");
    printf("%.2f\n", funcaoCalcularErro(N, A, B, erroMedioQuadradico));

    puts("Calculando por erro Absoluto médio: ");
    printf("%.2f", funcaoCalcularErro(N, A, B, erroAbsolutoMedio));
    return 0;
}

float funcaoCalcularErro(int n, int y[], int x[], float(funcaoErro)(int, int [], int[])){
    return funcaoErro(n, y, x);
}

float erroMedioQuadradico(int n, int y[], int x[]){
    int soma = 0;

    for(int i = 0;i < n; i++){
        soma += pow((y[i] - x[i]), 2);
    }

    return (float)soma/n;
}

float erroAbsolutoMedio(int n, int y[], int x[]){
    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += abs(y[i]-x[i]);
    }

    return (float)soma/n;
}