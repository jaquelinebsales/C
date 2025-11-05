#include <stdio.h>

#define SIZE 20
int main(){
    char string1[SIZE] = "string muito legal";
    char string2[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        *(string2+i) = *(string1+i);
    }

    for(int i = 0; i < SIZE; i++){
        printf("%c", *(string2+i));
    }
}