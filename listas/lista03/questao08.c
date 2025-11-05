#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 100

void bubbleSort(int []);
void selecao(int []);

int main(){
    int vetor[SIZE], valor_maximo, valor_minimo, res;

    puts("Especifique o valor minimo: ");
    scanf("%d", &valor_minimo);

    puts("Especifique um valor maximo: ");
    scanf("%d", &valor_maximo);

    srand(time(NULL));

    puts("Vetor gerado: ");
    for(int i = 0; i < SIZE; i++){
        vetor[i] = valor_minimo + (rand() % (valor_maximo - valor_minimo + 1));
        printf("%d ", vetor[i]);
    }
    puts(" ");
    puts("Digite 1 para ordernar por selecao: ");
    puts("Digite 2 para ordernar por bubble sort: ");
    scanf("%d", &res);
    switch (res){
        case 1:
            selecao(vetor);
            break;
        case 2:
            bubbleSort(vetor);
            break;
        default:
            break;
    }
    return 0;
}

void bubbleSort(int array[]){
    int aux, cont = 0;
    for(int pass = 0; pass < (SIZE-1); pass++){
        for(int i = 0; i < (SIZE-1); i++){
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }else{
                cont++;
            }
        }
        if(cont == (SIZE-1)){
            break;
        }
    }

    puts("Vetor ordenado por bubble sort: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
}

void selecao(int array[]){
    int aux;
    for(int i = 0; i < (SIZE-1); i++){
        for(int j = i+1; j < SIZE; j++){
            if(array[i] > array[j]){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }

    puts("Vetor ordenado por selecao: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    
}