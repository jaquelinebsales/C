#include <stdio.h>

#define SIZE 10

int main(){
    char string[SIZE], caractere;
    int cont;

    printf("Digite uma string de até %d caracteres: ", SIZE-1);
    fgets(string, sizeof(string), stdin);
    fflush(stdin);

    puts("Digite um caractere: ");
    scanf("%c", &caractere);

    cont = 0;
    for(int i = 0; i < SIZE ; i++){
        if(string[i]==caractere){
            puts("O caractere está na string");
            break;
        }else{
            cont++;
        }
    }

    if(cont == SIZE){
        puts("O caractere não está na string");
    }

    return 0;
}