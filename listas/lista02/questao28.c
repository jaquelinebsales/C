/*#include <stdio.h>

int main(){
    unsigned char x, y, mask, x_aux, cont, mask_2;

    puts("Digite um numero x: ");
    scanf("%hhu", &x);

    puts("Digite um numero y(maior ou igual que 5): ");
    scanf("%hhu", &y);

    x_aux = x;

    cont = 7;
    for(unsigned char i = (y+4); i >= (y+1); i--){
        mask = 0x01; 
        mask_2 = 0x01;

        mask = x_aux ^ (mask << cont);
        if(x_aux > mask){
            printf("O bit %hhu e 1", cont+1);
            printf("%hhu", i | 0x01);
        }else if(x_aux < mask){
            printf("O bit %hhu e 0", cont+1);
            printf("%hhu", i & ~(mask_2));
        }
        cont--;
    }

    cont = 3;
    for(unsigned char i = (y-1); i >= (y-4); i--){
        mask = 0x01; 
        mask_2 = 0x01;

        mask = x_aux ^ (mask << cont);
        if(x_aux > mask){
            printf("O bit %hhu e 1", cont+1);
            printf("%hhu", i | 0x01);
        }else if(x_aux < mask){
            printf("O bit %hhu e 0", cont+1);
            printf("%hhu", i & ~(mask_2));
        }
        cont--;
    }
}*/

#include <stdio.h>

int main(){
    int x, y, mask, x_aux, cont, mask_2;

    puts("Digite um numero x: ");
    scanf("%d", &x);

    puts("Digite um numero y(maior ou igual que 5): ");
    scanf("%d", &y);

    x_aux = x;

    cont = 7;
    for(int i = (y+4); i >= (y+1); i--){
        mask = 0x01; 
        mask_2 = 0x01;

        mask = x_aux ^ (mask << cont);
        if(x_aux > mask){
            printf("O bit %d e 1\n", cont+1);
            printf("%d\n", i | 0x01);
        }else if(x_aux < mask){
            printf("O bit %d e 0\n", cont+1);
            printf("%d\n", i & ~(mask_2));
        }
        cont--;
    }

    cont = 3;
    for(int i = (y-1); i >= (y-4); i--){
        mask = 0x01; 
        mask_2 = 0x01;

        mask = x_aux ^ (mask << cont);
        if(x_aux > mask){
            printf("O bit %d e 1\n", cont+1);
            printf("%d\n", i | 0x01);
        }else if(x_aux < mask){
            printf("O bit %d e 0\n", cont+1);
            printf("%d\n", i & ~(mask_2));
        }
        cont--;
    }
    
    return 0;
}