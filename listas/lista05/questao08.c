#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 3
#define MAX 50
int main(){
    int matriz[ROWS][COLUMNS] = {0}, soma = 0;

    srand(time(NULL));
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            matriz[i][j] = rand()%MAX;
        }
    }

    for(int i = 0; i < ROWS; i++){
            soma += matriz[i][i];
    }

    if(soma%2==0){
        puts("A soma da diagonal rpicipal e par");
    }else{
        puts("A soma da diagonal principal e impar");
    }
    
}