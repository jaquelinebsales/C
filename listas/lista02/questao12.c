#include <stdio.h>
#include <stdlib.h>
void main(){
    int valor;

    puts("Digite um valor");
    scanf("%d",&valor);

    for(int i = 1; i <= 10; i++){
        printf("%d vezes %d = %d \n", valor, i, valor*i);
    }
}