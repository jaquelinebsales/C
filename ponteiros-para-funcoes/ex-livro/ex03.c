#include <stdio.h>

#define QUANT_OPTIONS 5

void function1();
void function2();
void function3();
void function4();
void function5();

int main(){
    int res;
    void (*pontFuncoes[])(void) = {function1, function2, function3, function4, function5};

    printf("pontFuncoes: %p \n", pontFuncoes);
    printf("(pontFuncoes+2): %p \n", (pontFuncoes+2));
    printf("*(pontFuncoes+2): %p \n", *(pontFuncoes+2));
    printf("*(*(pontFuncoes+2)): %p \n", *(*(pontFuncoes+2)));
    printf("function2: %p \n", function2);
    printf("*function2: %p \n", *function2);

    for(int i = 1; i <= QUANT_OPTIONS; i++){
        printf("Digite %d para acessar a funcao %d \n", i, i);
    }
    scanf("%d", &res);

    switch (res){
    case 1:
        (*pontFuncoes)();
        break;

    case 2:
        (*(pontFuncoes+1))();
        break;

    case 3:
        (*(pontFuncoes+2))();
        break;

    case 4:
        (*(pontFuncoes+3))();
        break;

    case 5:
        (*(pontFuncoes+4))();
        break;

    default:
        printf("Resultado inválido.\nres:%d", res);
        break;
    }

    return 0;
}

void function1(){
    printf("Você acessou a função 1");
}

void function2(){
    printf("Você acessou a função 2");
}

void function3(){
    printf("Você acessou a função 3");
}

void function4(){
    printf("Você acessou a função 4");
}

void function5(){
    printf("Você acessou a função 5");
}