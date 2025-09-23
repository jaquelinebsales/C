#include <stdio.h>
#include <math.h>

void main(){
    int binario;
    int variavel_auxiliar = 0;
    int variavel_auxiliar2;

    for(int i = 1; i<=256; i++){
        variavel_auxiliar = 0;
        variavel_auxiliar2 = i;
        for (int j = 8; j >= 0; j--){
            if((int)pow(2,j) <= variavel_auxiliar2){
                if(j==0){
                    variavel_auxiliar+=1;
                } else if(j==0 && i == 1){
                    variavel_auxiliar = 1;
                } else {
                    variavel_auxiliar += (int)pow(10,j);
                    variavel_auxiliar2 -= (int)pow(2,j);        
                }

            }
        }

        binario = variavel_auxiliar;
        
        printf("%d %o %x %d\n",i,i,i, binario);
    }
}
