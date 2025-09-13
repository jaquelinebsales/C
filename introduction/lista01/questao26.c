#include <stdio.h>
#include <math.h>

void main(){
    float a;
    float b;
    float c;

    puts("Digite o valor de a: ");
    scanf("%f",&a);
    puts("Digite o valor de b: ");
    scanf("%f",&b);
    puts("Digite o valor de c: ");
    scanf("%f",&c);

    printf("Media aritmetica: %f", (a+b+c)/3);
    printf("Media geometrica: %f", cbrt(a*b*c));
}