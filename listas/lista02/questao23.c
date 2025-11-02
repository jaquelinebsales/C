#include <stdio.h>

void main(){
    int a, b, x, y;

    a = 5;
    b = 5;

    x = --a;//decrementa e depois atribui
    y = b--;//atribui, depois decrementa

    printf("x: %d \n", x); 
    printf("y: %d \n", y);
}