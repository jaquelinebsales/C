#include <stdio.h>

int main(){
    int v1, v2, soma;
    int *p_v1 = &v1, *p_v2 = &v2, *p_soma = &soma;

    puts("Digite um valor inteiro: ");
    scanf("%d", p_v1);

    puts("Digite outro valor inteiro: ");
    scanf("%d", p_v2);

    *p_soma = *p_v1 + *p_v2;

    printf("[%p] v1: %d \n", p_v1, *p_v1);
    printf("[%p] v2: %d \n", p_v2, *p_v2);
    printf("[%p] soma: %d \n", p_soma, *p_soma);
    return 0;
}