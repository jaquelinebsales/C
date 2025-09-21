#include <stdio.h>

void main(){
    puts("CELSIUS | FAHRENHEIT");
    for(int i = 10; i<=100; i+=10){
        printf("  %d ",i);
        printf("       %d\n", ((9*i/5)+32));
    }
}