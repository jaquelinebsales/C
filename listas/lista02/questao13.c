#include <stdio.h>

void main(){
    int A;
    int B;
    int maior;
    int menor;
    int somatorio = 0;

    puts("Digite o valor de A: ");
    scanf("%d", &A);
    
    puts("Digite o valor de B: ");
    scanf("%d", &B);

    if(A > B){
        menor = B;
        maior = A;
    } else {
        menor = A;
        maior = B;
    }

    for(int i = menor; i<= maior; i++){
        if(i%2 == 0){
            printf("%d + %d = %d\n", somatorio, i, somatorio+i);
            somatorio += i;
        }
    }

    printf("Somatorio: %d", somatorio);
}