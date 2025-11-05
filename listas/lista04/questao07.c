#include <stdio.h>

#define SIZE 20 
int main(){
    char string1[SIZE] = "eu amo ";
    char string2[SIZE] = "o lucas";

    for(int i = 0; i < SIZE; i++){
        if(*(string1+i) == '\0'){
            for(int j = (i); j < SIZE ; j++){
                *(string1+j) = *(string2+j-(i));
            }
            break;
        }   
    }

    printf("%s", string1);
}