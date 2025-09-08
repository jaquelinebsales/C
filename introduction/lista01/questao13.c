#include <stdio.h>

void main(){
    float temp_celsius;
    float temp_F;

    puts("Digite uma temperatura em celsius: ");
    scanf("%f",&temp_celsius);

    temp_F = ( 9*temp_celsius + 160)/ 5;

    printf("A temperatura em fahrenheit: %.2f", temp_F);
}