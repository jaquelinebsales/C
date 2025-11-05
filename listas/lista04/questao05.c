#include <stdio.h>

int main(){
    char string[] = "lucas";
    int i = 0, count = 0;

    while(*(string+i)!='\0'){
        i++;
        count++;
    }

    printf("A string tem tamanhho igual a %d", count);
}