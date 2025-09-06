/* Exercício (01/09) : A partir deste código, construa uma versão para desligar um 
bit em uma posição fornecida pelo usuário. */
#include <stdio.h>
/*
int main(){
    int cod = 219; //     1101 1011
    int  pos;
    int mask = 0x01; //   0000 0001

    // Ligar 
    puts("Digite a posição que deseja ligar: ");
    scanf("%d",&pos);

    //Processamento
    pos = pos - 1;
    mask = mask << pos;
    // mask <<= (pos-1);
    // cod = cod | mask; 
    cod |= mask;

    printf("Código atualizado: %d\n",cod);
    
    return 0;
}
*/
void main(){
    int cod = 219; // 1101 1011
    int pos;
    int mask = 0x01;

    puts("Digite a posicao que deseja desligar: ");
    scanf("%hhu",&pos);

    pos = pos - 1;
    printf("Posicao: %hhu \n", pos);
    mask = mask << pos;
    printf("Mascara: %hhu \n", mask);
    cod = cod ^ mask;

    printf("codigo final: %hhu \n",cod);
}