#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUNMS 3
#define MIN 0
#define MAX 11
int main(){
    int matriz[ROWS][COLUNMS], x, cont = 0;

    srand(time(NULL));
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUNMS; j++){
            matriz[i][j] = MIN + rand() % (MAX - MIN);
        }
    }

    puts("Matriz gerada: ");
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUNMS; j++){
            printf("%5d", matriz[i][j]);
            if(j == COLUNMS-1){
                puts(" ");
            }
        }
    }

    printf("Digite um valor inteiro entre %d e %d \n", MIN, MAX-1);
    scanf("%d", &x);

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUNMS; j++){
            if(matriz[i][j] == x){
                cont++;
            }
        }
    }

    printf("O valor %d aparece %d vezes na matriz. \n", x, cont);
}