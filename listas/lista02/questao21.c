#include <stdio.h>

void main(){
    int num;
    int dig_1;
    int dig_2;
    int dig_4;
    int dig_5;

    puts("Digite um numero inteiro de 5 digitos: ");
    scanf("%d",&num);

    dig_1 = num/10000;
    dig_2 = (num/1000)%10;
    dig_4 = (num/10)%10;
    dig_5 = num%10;
    
    if ((dig_1 == dig_5) && (dig_2 == dig_4)){
        puts("Esse numero e um palindromo!");
    }else{
        puts("Esse numero nao e um palindromo.");
    }

}