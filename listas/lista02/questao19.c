#include <stdio.h>

void main(){
    int A;
    int B;
    int C;
    int sum = 0;
    float media;
    puts("Digite um numero A: ");
    scanf("%d",&A);

    puts("Digite um numero B: ");
    scanf("%d",&B);

    if(A>B){
        C = A;
        A = B;
        B = C;
    }

    for(int i = A; i <= B; i++){
        sum += i;
    }

    media = ((float)sum)/(B - A);

    printf("A media dos numeros inteiro de %d ate %d e: %.2f", A, B, media);
}