#include <stdio.h>

#define SIZE 50
int main(){
    char string[SIZE] = {0};
    int cont = 0;

    puts("Digite uma string: ");
    fgets(string, SIZE, stdin);

    for(int i = 0; i < SIZE; i++){
        if(string[i] != '\0'){
            cont++;
        }else{
            break;
        }
    }

    printf("A quantidade de caracteres da string é: %d \n", (cont-1));
}