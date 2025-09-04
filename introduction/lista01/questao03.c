#include <stdio.h>
#include <math.h>//usado para importar pow()

void main(){
    int x;
    
    puts("Digite um valor inteiro: ");
    scanf("%d",&x);

    printf("O triplo de %d: %d \n",x, x*3);
    printf("O quadrado de %d: %.0f \n",x, pow(x,2));
    printf("O meio de %d: %d \n",x, x/2);

}