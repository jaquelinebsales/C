#include <stdio.h>

void main(){
    int div_3_som = 0;
    int div_5_som = 0;

    for(int i = 0; i<=100; i++){
        if (i%3==0){
            div_3_som++;
        }

        if((i+100)%5==0){
            div_5_som++;
        }
    }

    printf("Divisiveis por 3: %d \n", div_3_som);
    printf("Divisiveis por 5: %d \n", div_5_som);
}