#include <stdio.h>

#define MAX 10
#define QUANT_ALUNOS 3

struct Aluno{
    float notas[2];
    float media;
};

float mediaAlunos(struct Aluno *pAlunos, int qntAlunos);

int main(){
    struct Aluno alunos[QUANT_ALUNOS];
    
    for(int i = 0; i < QUANT_ALUNOS; i++){
        printf("Digite a nota 1 do aluno %d: ", i);
        scanf("%f", &((alunos+i)->notas[0]));

        printf("Digite a nota 2 do aluno %d: ", i);
        scanf("%f", &((alunos+i)->notas[1]));       
    }

    float soma = 0;
    for(int i = 0; i < QUANT_ALUNOS; i++){
        soma = 0;
        for (int j = 0; j < 2; j++){
            soma += (alunos+i)->notas[j];
        }
        (alunos+i)->media = soma/2;
    }

    puts("");
    for(int i = 0; i < QUANT_ALUNOS; i++){
        printf("Nota 1 do aluno %d:  %.2f \n", i, (alunos+i)->notas[0]);
        printf("Nota 2 do aluno %d: %.2f \n", i, (alunos+i)->notas[1]);
        printf("Média do aluno %d: %.2f \n", i, (alunos+i)->media);
        puts("");
    }

    printf("Média de todos os alunos: %.2f", mediaAlunos(alunos, QUANT_ALUNOS));

    return 0;
}

float mediaAlunos(struct Aluno *pAlunos, int qntAlunos){
    float soma = 0;
    for(int i = 0; i < qntAlunos; i++){
        soma += (pAlunos+i)->media;
    }
    return soma/qntAlunos;
}