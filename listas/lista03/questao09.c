#include <stdio.h>

#define ROWS 3
#define COLLUMNS 3
int main(){
    int matriz[ROWS][COLLUMNS];
    
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLLUMNS; j++){
            printf("Digite o valor da posicao [%d][%d] \n", i, j);
            scanf("%d",&matriz[i][j]);
        }
    }

    puts("Elementos da diagonal principal: ");
    for(int i = 0; i < ROWS; i++){
        printf("%d ", matriz[i][i]);
    }
    return 0;
}
