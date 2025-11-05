#include <stdio.h>

#define SIZE 5
int main(){
    double vetor[SIZE];

    for(int i = 0; i < SIZE; i++){
        printf("digite o valor da posicao %d: ", i+1);
        scanf("%lf", &vetor[i]);
        getchar();
    }

    for (int i = 0; i < SIZE; i++){
        printf("[%p] %lf \n", (vetor+i), vetor[i]);
    }
    
}

//EU percebi que o salto dos bytes varia de acrood com a opcuação do tipo de elemento quye é armazenado no vetor