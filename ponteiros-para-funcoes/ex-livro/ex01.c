#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX 100

void bubble(int work[], const int size, int(*compare)(int a, int b));
void inverte(int *element1, int *element2);
int crescente(int a, int b);
int decrescente(int a, int b);

int main(){
    int order;
    int cont;
    int a[SIZE];

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        *(a+i) = rand()%MAX;
    }

    puts("Digite 1 para ordenar em ordem crescente");
    puts("Digite 2 para ordenar em ordem descrescente.");
    scanf("%d", &order);

    puts("Vetor original gerado: ");
    for(int i = 0; i < SIZE; i++){
        printf("%5d", *(a+i));
    }

    if(order == 1){
        bubble(a, SIZE, crescente);
    }else if(order == 2){
        bubble(a, SIZE, decrescente);
    }

    puts("");
    puts("Vetor ordenado: ");
    for(int i = 0; i < SIZE; i++){
        printf("%5d", *(a+i));
    }
 
    return 0;
}

void bubble(int work[], const int size, int(*compare)(int a, int b)){
    for(int pass = 0; pass < size; pass++){
        for(int i = 0; i < (size-1); i++){
            if(compare(*(work+i), *(work+i+1))){
                inverte((work+i), (work+i+1));
            }
        }
    }
}

void inverte(int *element1, int *element2){
    int var_aux;
    var_aux = *element1;
    *element1 = *element2;
    *element2 = var_aux;
}

int crescente(int a, int b){
    return(a > b);
}

int decrescente(int a, int b){
    return(a < b);
}