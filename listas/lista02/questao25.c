#include <stdio.h>

void main(){
    float pi = 0;
    int j;
    int counter = 0;

    for(int i = -1; i>= -100; i-= 2){
        counter++;
        if(counter == 1){
            pi += (float)4/(i*(-1));
            printf("pi: %f \n", pi);
            counter++;
        }else if(counter == 3){
            pi += (float)4/i;
            printf("pi: %f \n", pi);
            counter=0;          
        }
    }
}