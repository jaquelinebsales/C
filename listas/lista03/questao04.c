#include <stdio.h>

#define SIZE 10
int main(){
    char string1[SIZE], string2[SIZE];
    int cont;

    puts("Digite uma string: ");
    fgets(string1, SIZE, stdin);

    puts("Digite outra string: ");
    fgets(string2, SIZE, stdin);

    for(int i = 0; i < SIZE; i++){
        if(string1[i]==string2[i]){
            cont++;
        }else{
            puts("As string são diferentes");
            break;
        }
    }

    if(cont==SIZE){
        puts("As string são iguais.");
    }

    return 0;
}