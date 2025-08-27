#include <stdio.h>

int main(){
    printf("Quantidade de bytes do char: %d \n", sizeof(char));
    printf("Quantidade de bytes do unsigned char: %d \n", sizeof(unsigned char));
    printf("Quantidade de bytes do signed char: %d \n", sizeof(signed char));
    printf("Quantidade de bytes do int: %d \n", sizeof(int));
    printf("Quantidade de bytes do unsigned int: %d \n", sizeof(unsigned int));
    printf("Quantidade de bytes do signed int: %d \n", sizeof(signed int));
    printf("Quantidade de bytes do short int: %d \n", sizeof(short int));
    printf("Quantidade de bytes do unsigned short int: %d \n", sizeof(unsigned short int));
    printf("Quantidade de bytes do signed short int: %d \n", sizeof(signed short int));
    printf("Quantidade de bytes do long int: %d \n", sizeof(long int));
    printf("Quantidade de bytes do signed long int: %d \n", sizeof(signed long int));
    printf("Quantidade de bytes do unsigned long int: %d \n", sizeof(unsigned long int));
    printf("Quantidade de bytes do float: %d \n", sizeof(float));
    printf("Quantidade de bytes do double: %d \n", sizeof(double));
    printf("Quantidade de bytes do long double: %d \n", sizeof(long double));


    unsigned char x = 0x32;

    printf("x = %d bytes de memória \n", sizeof(x));
    return 0;
}