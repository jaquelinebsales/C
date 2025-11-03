#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX_VALUE 50
#define MIN_VALUE 40
#define RANGE_VALUES (MAX_VALUE - MIN_VALUE)

void gerandoArray(float Array[]);
float media(const float Array[]);
int calcularModa(const int ArrayModa[]);
void gerandoArrayModa(const float Array[], int ArrayModa[]);
void valorRecorrente(const int ArrayModa[], const int Moda, int arrayValores[]);
float calcularMediana(float Array[]);

int main(){
    float array[SIZE] = {0};
    int arrayModa[RANGE_VALUES] = {0};
    int valoresRecorrentes[RANGE_VALUES] = {0};

    gerandoArray(array);
    media(array);
    gerandoArrayModa(array, arrayModa);
    int moda = calcularModa(arrayModa);
    valorRecorrente(arrayModa, moda, valoresRecorrentes);
    calcularMediana(array);

}

void gerandoArray(float Array[]){
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        Array[i] = MIN_VALUE + ((float)rand() / RAND_MAX)*(MAX_VALUE - MIN_VALUE);
    }
    
    puts("Printando o array: ");
    for(int i = 0; i < SIZE; i++){
        printf("%.2f \n", Array[i]);
    }
}

float media(const float Array[]){
    float soma = 0, media;

    for(int i = 0; i<SIZE; i++){
        soma += Array[i];
    }

    media = soma/SIZE;
    printf("A media do array e: %.2f \n", media);
    return media;
}

void gerandoArrayModa(const float Array[], int ArrayModa[]){

    puts("Calculando a recorrência dos valores convertidos para inteiro: ");

    for(int i = MIN_VALUE; i < MAX_VALUE; i++){
        for(int j = 0; j < SIZE ; j++){
            if(((int)Array[j]) == i){
                ArrayModa[i-MIN_VALUE] += 1;
            }
        }
    }

    for(int i = MIN_VALUE; i < MAX_VALUE; i++){
        printf("Quantidade de valores %d repetidos: %d \n", i, ArrayModa[i-MIN_VALUE]);
    }

}

int calcularModa(const int ArrayModa[]){
    int moda = ArrayModa[0];

    for(int i = 0; i < RANGE_VALUES; i++){
        if(moda < ArrayModa[i]){
            moda = ArrayModa[i];
        }
    }

    printf("A moda e: %d \n", moda);

    return moda;
}

void valorRecorrente(const int ArrayModa[], const int Moda, int arrayValores[]){
    int count = 0;

    for(int i = 0; i < RANGE_VALUES; i++){
        if(Moda == ArrayModa[i]){
            arrayValores[count] = i+MIN_VALUE;
            count++;
        }
    }

    for(int i = 0; i < count; i++){
        printf("O(s) valor(es) que mais de repete(m) e(sao): %d\n", arrayValores[i]);
    }

}

float calcularMediana(float Array[]){
    int count, aux;
    float hold, mediana;
    //ordenando vetor
    for(int pass = 1; pass < (SIZE); pass++){
        count = 0;
        for(int i = 0 ; i < (SIZE - 1); i++){
            if(Array[i] > Array[i+1]){
                hold =  Array[i];
                Array[i] = Array[i+1];
                Array[i+1] = hold;
            }else{
                count++;
            }
        }
        if(count == SIZE-1){
            break;
        }
    }

    puts("Array ordenado: ");
    for(int i = 0; i < SIZE; i++){
        printf("%.2f \n", Array[i]);
    }

    aux = SIZE/2;
    if(SIZE%2==0){
        mediana = (Array[aux]+Array[aux-1])/2;
    }else{
        mediana = Array[aux+1];
    }
    printf("A mediana e: %.2f", mediana);

    return mediana;
}
