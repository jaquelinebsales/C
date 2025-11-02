#include <stdio.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);

    int horas;
    int minutos;
    int segundos;

    puts("Digite as horas: ");
    scanf("%d",&horas);
    
    puts("Digite os minutos: ");
    scanf("%d",&minutos);
    
    puts("Digite os segundos: ");
    scanf("%d",&segundos);

    segundos = segundos + (minutos*60) + (horas*3600);

    printf("Os segundos totais são: %d\n",segundos);
}