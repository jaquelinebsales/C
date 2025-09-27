#include <stdio.h>

int main(){
    int num;
    int menor = 1;
    int maior = 1;
    int cont = 0;

    do{
        puts("Digite um número: ");
        scanf("%d", &num);

        if(num<0 && num%2==0){
            puts("Tchau!");
            break;
        }else{
            if(cont == 0){
            menor = num;
            maior = num;
            cont++;
            }else{
                if(num < menor){
                    menor = num;
                }else if( num > maior){
                    maior = num;
                }
            }

            printf("A multiplicacao do maior(%d) pelo menor(%d) numero e: %d \n", maior, menor, maior*menor);
        }
    }while(!(num<0 & num%2==0));
 
    return 0;
}