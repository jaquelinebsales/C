#include <stdio.h>

int main(){
    int n, v , verif_1_iteracao = 0;

    do{
        puts("Digite um valor inteiro: ");
        scanf("%d", &n);

        if(verif_1_iteracao == 0){
            v = n;
            verif_1_iteracao++;
        }

        if(n > v){
            v = n;
        }

        printf("O valor mais significativo e: %d \n", v);
    }while(n);
    
}