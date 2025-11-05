#include <stdio.h>
#define SIZE 10

void reverse(char []);

int main(){
    char palavra[SIZE] = {0};

    puts("Digite uma palavra: ");
    fgets(palavra, SIZE, stdin);

    reverse(palavra);
    return 0;
}

void reverse(char str[]){
    int aux = 0;
    for(int i = (SIZE-1); i>=0; i--){
        if(str[i] == '\0'){
            aux = 1;
            continue;
        }
        if(aux){
            putchar(str[i]);//imprime o CARACTERE SOLITÁRO dentro dos parenteses
        }
    }
}