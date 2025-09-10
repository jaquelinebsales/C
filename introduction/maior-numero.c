#include <stdio.h>
#include <windows.h>
void main(){
    SetConsoleOutputCP(65001);
    int valor;
    int maior_num;

    /*do{
        puts("Digite um valor");
        scanf("%d",&valor);

        (valor <= maior_num)?:(maior_num = valor);

        printf("O maior valor digitado é: %d \n", maior_num);
    }while(valor);*/

    puts("Digite um valor");
    scanf("%d",&valor);
    (valor)?(maior_num = valor):(puts("tchau!"));

    while (valor){
        printf("O maior valor é: %d \n",maior_num);

        puts("Digite um valor");
        scanf("%d",&valor);

        if (valor >= maior_num)
            maior_num = valor;     
    }
    
}