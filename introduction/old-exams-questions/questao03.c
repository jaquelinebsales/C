/*Implemente em C:
S = Somatório de i, onde i inicia em z e vai até y.
Seja i um número par*/
#include <windows.h>
#include <stdio.h>

int main(){
    SetConsoleOutputCP(65001);

    int S = 0;
    int z, y;

    puts("===SOMATÓRIO===");
    puts("Digite o ínicio do intervalo: ");
    scanf("%d",&z);

    puts("Digite o final do intervalo: ");
    scanf("%d",&y); 

    if(z < y){
        for (int i = z; i<=y; i++){
            if (i%2==0){
                S+=i;
            }
        }
        printf("O somatório dos números pares de %d até %d é: %d", z, y, S);
    }else if(z >= y){
        puts("Digite um intervalo válido.");
    }

    return 0;
}