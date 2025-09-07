/* Exercício (01/09) : A partir deste código, construa uma versão para desligar um 
bit em uma posição fornecida pelo usuário. */
#include <stdio.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);

    int cod = 219; // 1101 1011
    int pos;
    int mask = 0x01;

    puts("Digite a posicao que deseja desligar: ");
    scanf("%d",&pos);

    if(pos <= 8){
        pos = pos - 1;
        mask = mask << pos;
        if (cod & mask){
            cod = cod ^ mask;
            puts("Condição atualizada com sucesso!");
        }else{
            puts("A posição já está desligada. Por gentileza, digite outra posição.");
        }
    }else{
        puts("O número digitado excede o número de posições totais.");
    }
    
    printf("Código final: %hhu \n",cod);
}