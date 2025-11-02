#include <stdio.h>

void main(){
    int A;
    int B;

    puts("Digite o valor da variável A: ");
    scanf("%d",&A);
    puts("Digite o valor da variável B: ");
    scanf("%d",&B);

    puts("Antes da troca: ");
    printf("A: %d \n",A);
    printf("B: %d \n",B);

    A = A^B;
    B = A^B;
    A = A^B;

    puts("Depois da troca: ");
    printf("A: %d \n",A);
    printf("B: %d \n",B);
}