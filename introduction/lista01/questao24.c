#include <stdio.h>
#include <math.h>

void main(){
    int segundos;
    int minutos;
    int horas;

    puts("Digite um tempo em segundos: ");
    scanf("%d",&segundos);

    minutos = segundos/60;
    segundos = segundos % 60;

    horas = minutos/60;
    minutos = minutos%60;

    printf("Horas: %d \n",horas);
    printf("Minutos: %d \n",minutos);
    printf("Segundos: %d \n",segundos);

}