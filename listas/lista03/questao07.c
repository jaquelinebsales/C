#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 3
#define MAX 20
int main(){
    int vetor[SIZE] = {0};
    float media_aritmetica = 0, media_geometrica = 0;
    int soma = 0, multiplicacao = 1;

    puts("vetor gerado: ");
    srand(time(NULL));
    for(int i =0; i<SIZE; i++){
        vetor[i] = rand() % MAX;
        printf("%d ", vetor[i]);
    }
    puts(" ");

    for(int i = 0; i < SIZE; i++){
        soma += vetor[i];
        multiplicacao *= vetor[i];
    }

    media_aritmetica = (float)soma / SIZE;
    printf("A media aritmetica do vetor e: %.2f \n", media_aritmetica);

    media_geometrica = pow(multiplicacao, 1.0/SIZE);
    printf("A media geometrica do vetor e: %.5f", media_geometrica);    
    return 0;
}