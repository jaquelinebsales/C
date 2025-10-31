#include <stdio.h>

#define TAM 3

int maiorValor(int *vetor_ponteiro);

int main(){
    int vetor_inteiros[TAM];

    printf("Digite três inteiros: ");
    scanf("%d%d%d", vetor_inteiros, vetor_inteiros+1, vetor_inteiros+2);

    printf("O maior valor digitado foi: %d", maiorValor(vetor_inteiros));
}

int maiorValor(int *vetor_ponteiro){
    int maior = *vetor_ponteiro;
    for(int i = 1; i<TAM; i++){
        if(vetor_ponteiro[i] > maior){
            maior = vetor_ponteiro[i];
        }
    }

    return maior;
}