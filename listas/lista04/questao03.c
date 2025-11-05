#include <stdio.h>

int main(){

    int valor, menor, cont = 0, *ponteiro_valor = &valor, *ponteiro_menor = &menor;

    do{
        puts("Digite um valor (digite 0 para finalizar): ");
        scanf("%d", ponteiro_valor);

        if(*ponteiro_valor){
            if(cont){
            if(*ponteiro_menor > *ponteiro_valor){
                *ponteiro_menor = *ponteiro_valor;
            }
            }else{
                *ponteiro_menor = *ponteiro_valor;
                cont++;
            }
        }
    }while(*ponteiro_valor != 0);

    printf("O menor valor digitado pelo usuario foi: %d", *ponteiro_menor);
}