#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    
    int a, p;

    puts("Digite um número em decimal: ");
    scanf("%d", &a);
    
    puts("Digite a posição que deseja ligar (1-8): ");
    scanf("%d", &p);
    
    // Cálculo direto em uma linha
    int resultado = (1 << (p - 1)) | a;
    
    printf("Número original: %d\n", a);
    printf("Com posição %d ligada: %d\n", p, resultado);

    return 0;
}