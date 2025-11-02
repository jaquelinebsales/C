#include <stdio.h>
#include <math.h>

void main(){
    unsigned int binario = 0;
    unsigned int v_aux = 0;
    unsigned int mask = 1;

    for(int i = 1; i<=256; i++){
        v_aux = i;
        binario = 0;
        mask = 1;
        while (v_aux > 0){
            binario += ((v_aux%2) * mask);
            v_aux /= 2;
            mask *= 10;
        }
        printf("%d %o %x %d\n",i,i,i, binario);
    }
}
