#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 50
struct Estrutura{
    int *pVetor;
    int qntElements;
    float media;
};

int main(){
    struct Estrutura x;
    
    puts("Digite a quantidade de elementos: ");
    scanf("%d", &x.qntElements);

    x.pVetor = malloc(x.qntElements*sizeof(int));

    if(x.pVetor == NULL){
        puts("Alocação dinâmica mal sucessida");
        exit(1);
    }

    srand(time(NULL));
    for(int i = 0; i < x.qntElements; i++){
       *(x.pVetor+i) = rand()%MAX;
    }

    //Printar vetor gerado
    puts("Vetor gerado: ");
    for(int i = 0; i < x.qntElements; i++){
        printf("%5d", *(x.pVetor+i));
    }

    //Cálculo da média
    int soma = 0;
    for(int i = 0; i <  x.qntElements; i++){
        soma += *(x.pVetor+i);
    }
    x.media = (float)soma/x.qntElements;

    puts("");
    printf("Endereço de memória do vetor: %p \n", x.pVetor);
    printf("Quantidade de elementos: %d \n", x.qntElements);
    printf("Média: %.2f\n", x.media);
    return 0;
}