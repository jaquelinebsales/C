#include <stdio.h>

#define SIZE 10
int main(){
    char string[SIZE] = "lucas", c;

    puts("Digite um caractere: ");
    scanf("%c", &c);

    for(int i = 0; i < SIZE; i++){
        if(*(string+i) == c){
            puts("O caractere está na string");
            break; 
        }
    }
    
    return 0;
}