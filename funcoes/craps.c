/*jogo de azar*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lancamento(int *ponteiroDado1, int *ponteiroDado2);
int somatorio(int dadoo1, int dadoo2);

int main(){

    int res = 1;
    int soma, ponto = 0;
    int dado1;
    int dado2;
    int cont = 1;


    while (res == 1){

        lancamento(&dado1, &dado2);
        soma = somatorio(dado1, dado2);
        
        if(cont){
            switch(soma){
                case 7:
                case 11:
                    printf("O jogador ganhou! \n");
                    ponto = 0;
                break;
                case 2:
                case 3:
                case 12:
                    printf("O jogador perdeu. \n");
                    ponto = 0;
                break;
                case 4:
                case 5:
                case 6:
                case 8:
                case 9:
                case 10:
                    ponto = soma;
                    printf("O ponto do jogador e: %d \n", soma);
                    puts("O jogador deve continuar jogando ate alcança-lo novamente para ganhar. Caso antes disso, consiga uma soma igual a 7, o jogador perde.");
                    cont = 0;
                break;
            }
            
        }else if(ponto && (soma == 7 || ponto == soma)){
            if(soma == 7){
                puts("O jogador perdeu.");
            }else{
                puts("Você atingiu seu ponto. O jogador venceu!");
            }

            ponto = 0;
            cont = 1;
            
        }

        puts("Digite 1 para JOGAR NOVAMENTE e 0 para SAIR");
        scanf("%d", &res);
    }

    return 0;
    
}

void lancamento(int *ponteiroDado1, int *ponteiroDado2){
    srand(time(NULL));

    *ponteiroDado1 = 1 + rand()%6;
    *ponteiroDado2 = 1 + rand()%6;
}

int somatorio(int dadoo1, int dadoo2){ 
    printf("A soma e: %d \n", dadoo1 + dadoo2);
    return (dadoo1 + dadoo2);
}