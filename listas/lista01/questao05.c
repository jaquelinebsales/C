#include <stdio.h>

void main(){
    float altura;
    char sexo;
    float peso_ideal;

    puts("Digite seu sexo biologico[m/f]: ");
    scanf("%c",&sexo);

    puts("Digite sua altura: ");
    scanf("%f",&altura);

    if(sexo == 'm'){
        peso_ideal = 72.7 * altura - 58;
    }else{
        peso_ideal = 62.1 * altura - 44.7;
    }

    printf("Seu peso ideal e: %.2f\n", peso_ideal);
}