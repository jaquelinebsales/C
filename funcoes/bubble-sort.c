#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10
#define MAX_VALUE 50
int main(void){
    float array[SIZE] = {0};
    float aux;
    int count, count_passadas;

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        array[i] = ((float)rand()/RAND_MAX) * MAX_VALUE; 
    }

    puts("Printando o array: ");
    for(int i  = 0; i< SIZE; i++){
        printf("%.2f \n", array[i]);
    }

    count_passadas = 0;
    for(int pass = 1; pass < SIZE ; pass++){
        count = 0;
        for (int i = 0 ; i < (SIZE - 1); i++){
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }else{
                count += 1;
            }
        }
        count_passadas += 1;
        if(count == (SIZE - 1)){
            break;
        }
    }

    printf("Passadas necessáras: %d \n", count_passadas);

    puts("Printando o array ordenado: ");
    for(int i  = 0; i< SIZE; i++){
        printf("%.2f \n", array[i]);
    }

    return 0;
}