#include <stdio.h>
#include <math.h>
void main(){

    for(int cateto1 = 1; cateto1 <= 500; cateto1++){
        for (int cateto2 = 1; cateto2 <= 500; cateto2++){
            for(int hipotenusa = cateto1+1; hipotenusa <= 500; hipotenusa++){
                if(cateto1*cateto1 + cateto2*cateto2 == hipotenusa*hipotenusa){
                    printf("%d^2 + %d^2 = %d^2\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}