#include <stdio.h>

int main(){

    unsigned char x = 255;
    x += 1;
    printf("x = %hhu \n", x);
    return 0;
}

//extrapolar a capacidade de um tipo faz causar um overflow, igual nas operações de números binários