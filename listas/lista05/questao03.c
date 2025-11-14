#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 20
int main(){
    int x[TAM];

    srand(time(NULL));
    for(int i = 0; i< TAM; i++){
        x[i] = rand() % 20;
    }

    puts("Vetor gerado: ");
    for(int i = 0; i< TAM; i++){
        printf("%5d", x[i]);
    }

    int menor = x[0], maior = menor;

    for(int i = 0; i < TAM; i++){

        if(menor > *(x+i)){
            menor = *(x+i);
        }

        if(maior < *(x+i)){
            maior = *(x+i);
        }
    }

    puts("");
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    for(int i = 0; i < TAM; i++){
        *(x+i) = (*(x+i) - menor)/(maior-menor);
    }

    puts("Vetor normalizado: ");
    for(int i = 0; i < TAM; i++){
        printf("%5d", x[i]);
    }   

    return 0;
}