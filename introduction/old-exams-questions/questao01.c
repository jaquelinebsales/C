#include <stdio.h>

int main(){
    int entrada,x,y;
    double limite = 0.00001;

    puts("Digite o valor da entrada: ");
    scanf("%d", &entrada);

    x = entrada;

    while((x-y)>limite || (y-x)>limite){
        x=(x+y)/2;
        y = entrada/x;
    }
    
    printf("O valor de x e: %d \n", x);
    return 0;
}