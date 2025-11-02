#include <stdio.h>

void main(){
    int dias_trabalhados;
    float valor_total;

    puts("Digite o número de dias trabalhados: ");
    scanf("%d",&dias_trabalhados);

    valor_total = dias_trabalhados * 50.25;
    
    if(dias_trabalhados > 20){
        valor_total = valor_total + ((valor_total*30)/100);
    }else if(dias_trabalhados > 10){
        valor_total = valor_total + ((valor_total * 20)/100);
    }

    valor_total =  valor_total - ((valor_total*10)/100);
    printf("O valor total recebido é de R$ %.2f",valor_total);
}