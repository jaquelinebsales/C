#include <stdio.h>

#define SIZE 15

float maiorMenorSoma(float Vetor[], int tamanhoArray);
int main(){
    float vetor[SIZE];

    for(int i = 0; i < SIZE; i++){
        printf("Digite o elemento %d do array: \n", i);
        scanf("%f", vetor+i);
    }

    printf("A soma do menor elemento com o maior é: %.2f \n", maiorMenorSoma(vetor, SIZE));
    return 0;
}

float maiorMenorSoma(float Vetor[], int tamanhoArray){
    float maior = Vetor[0];
    float menor = Vetor[0];

    for(int i = 0; i < tamanhoArray; i++){
        if(maior < Vetor[i]){
            maior = Vetor[i];
        }
        if(menor > Vetor[i]){
            menor = Vetor[i];
        }
    }

    return maior+menor;
}

