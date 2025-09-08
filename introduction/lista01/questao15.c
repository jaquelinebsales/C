#include <stdio.h>

void main(){
    float valor_hora_aula;
    float horas_mes;
    float desconto_INSS;
    float salario_bruto;
    float salario_liquido;

    puts("Digite o valor da hora aula: ");
    scanf("%f",&valor_hora_aula);

    puts("Digite quantas horas o professor trabalhou por mês: ");
    scanf("%f",&horas_mes);

    salario_bruto = valor_hora_aula * horas_mes;
    printf("O salário bruto do professor é: %.2f \n", salario_bruto);

    puts("Digite, em porcentagem, o desconto do INSS: ");
    scanf("%f",&desconto_INSS);

    salario_liquido = salario_bruto - ((salario_bruto*desconto_INSS)/100);

    printf("Seu salário líquido é: %.2f", salario_liquido);

}