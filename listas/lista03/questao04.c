#include <stdio.h>
#include <string.h>

#define SIZE 10

char *iguaisStrings(char [], char []);
char * ComparandoStrcmp(char [], char []);
int main(){
    char string1[SIZE] = {0}, string2[SIZE] = {0};

    puts("Digite uma string: ");
    fgets(string1, SIZE, stdin);

    puts("Digite outra string: ");
    fgets(string2, SIZE, stdin);


    printf("%s", iguaisStrings(string1, string2));

    puts("Comparando com strcmp: ");
    puts(ComparandoStrcmp(string1, string2));
    return 0;
}

char *iguaisStrings(char str1[], char str2[]){

    for(int i = 0; i < SIZE; i++){
        if(str1[i]==str2[i]){

        }else{
            return ("As strings sao diferentes.\n");
        }
    }
    return ("As string são iguais.\n");

}

char * ComparandoStrcmp(char str1[], char str2[]){
    int result = strcmp(str1, str2);

    if(result == 0){
        return "As strings são iguais";
    }else{
        return "As strings são diferentes";
    }
}