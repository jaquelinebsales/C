#include <stdio.h>

void main(){
    int A;
    int B;
    int aux;
    int count = 0;

    puts("Digite o valor de A: ");
    scanf("%d", &A);
    
    puts("Digite o valor de B: ");
    scanf("%d", &B);

    if(A>B){
        aux=A;
        A=B;
        B=aux;
    }

    for(int i = A; i <= B; i++){
        if (i%3 == 0){
            count+=1;
        }
    }

    printf("Existem %d numeros divisiveis por 3 neste intervalo.", count);
}