#include <stdio.h>

void main(){
    int t1 = 1;
    int t2 = 1;
    int t_next;

    puts("1 termo: 1");
    puts("2 termo: 1");
    for(int i = 3; i <=20 ; i++){
        t_next = t1 + t2;
        t1 = t2;
        t2 = t_next;

        printf("%d termo: %d \n",i,t_next);
    }
}