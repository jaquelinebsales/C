#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define MAX 100

int moda(int *);
float media(int *);
float mediana(int *);

int main(){
    int vetor[SIZE];

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        vetor[i] = rand()%MAX;
    }

    puts("Vetor gerado: ");
    for(int i = 0; i < SIZE; i++){
        printf("%5d", vetor[i]);
    }

    puts("");
    printf("Media: %.2f \n", media(vetor));
    printf("Mediana: %.2f \n", mediana(vetor));
    printf("Moda: %d \n", moda(vetor));

    return 0;
}

float media(int *Vetor){
    int soma = 0;
    float media;

    for(int i = 0; i< SIZE; i++){
        soma+= Vetor[i];
    }
    media = (float)soma/SIZE;

    return media;
}

float mediana(int *Vetor){
    int var_aux;
    float mediana;
    for(int i = 0; i < SIZE-1; i++){
        for(int j = i+1; j < SIZE; j++){
            if(*(Vetor+i) > *(Vetor+j)){
                var_aux = *(Vetor+i);
                *(Vetor+i) = *(Vetor+j);
                *(Vetor+j) = var_aux;
            }
        }
    }

    if(SIZE%2 == 0){
        mediana = (float)(Vetor[(SIZE/2)-1]+Vetor[SIZE/2])/2;
    }else{
        mediana = Vetor[(SIZE/2)-1];
    }

    return mediana;
}

int moda(int *Vetor){
    int array_contador[MAX] = {0}, Moda = 0, cont = 0;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < MAX; j++){
            if(Vetor[i] == j){
                array_contador[j]++;
            }
        }
    }

    for(int i = 0; i < MAX; i++){
        if( cont < array_contador[i]){
            Moda = i;
            cont = array_contador[i];
        }
    }

    return Moda;
}
