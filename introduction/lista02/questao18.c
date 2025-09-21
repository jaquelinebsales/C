#include <stdio.h>

void main(){
    unsigned long long graos = 0;
    unsigned long long quadro_atual = 1;

    for(int i = 1; i<=64; i++){
        graos += quadro_atual;
        quadro_atual*=2;
    }

    printf("A quantidade final de graos e: %llu", graos);
}