#include <stdio.h>
#include <math.h>

void main(){
    for(int i = 15; i <= 90; i++){
        if(i%4 == 0){
            printf("O quadrado de %d e: %.0f \n", i, pow(i, 2));
        }
    }
}