#include <stdio.h>

int main(void){
    int n[10];

    for(int i = 0; i < 10; i++){
        n[i] = 0;
    }

    printf("%s%13s\n", "Elemento", "Valor");

    for(int i = 0; i<10; i++){
        printf("%6d%13d\n", i, n[i]);
    }

    return 0;
}