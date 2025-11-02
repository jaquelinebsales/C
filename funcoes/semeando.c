/*Criando sementes diferentes para rand()*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned seed;

    puts("Digite uma semente (inteiro positivo): ");
    scanf("%d", &seed);

    srand(seed);

    for(int i =0; i<=10; i++){
        printf("%d ", rand()%10);
    }

    return 0;
}