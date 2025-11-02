#include <stdio.h>
#include <math.h>

void main(){
    int A;
    int B;
    int maior;
    int menor;

    puts("Digite o valor de A: ");
    scanf("%d", &A);
    puts("Digite o valor de B: ");
    scanf("%d", &B);

    if(A>B){
        maior = A;
        menor = B;
    }else{
        maior = B;
        menor = A;
    }
    
    for(int i = menor; i <= maior; i++){
        if(i%4 == 0){
            printf("O quadrado de %d e: %.0f \n", i, pow(i, 2));
        }
    }
}