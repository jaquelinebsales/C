#include <stdio.h>
#include <string.h>
#define SIZE 20
char* concatenarStrings(char str1[], char str2[]);

int main(){
    char string1[SIZE] = {0};
    char string2[SIZE] = {0};
    int res;
    
    puts("Digite a primeira string: ");
    fgets(string1, SIZE, stdin);

    puts("Digite a segunda string: ");
    fgets(string2, SIZE, stdin);

    puts("Digite 1 para concatenar manualmente");
    puts("Digite 2 para concatenar com a função strcat()");
    scanf("%d",&res);

    switch (res){
        case 1:
            printf("String concatenada manuamente: %s", concatenarStrings(string1, string2));
            break;
        case 2:
            printf("String concatenada com strcat: %s", strcat(string1, string2));
            break;
        default:
            break;
    }

    return 0;
}

char* concatenarStrings(char str1[], char str2[]){
    for(int i = 0; i < SIZE; i++){
        if(str1[i] == '\0'){
            for(int j = (i-1); j < SIZE; j++){
                str1[j] = str2[j-(i-1)];
            }
            return str1;
        }
    }
    return "Erro";
}