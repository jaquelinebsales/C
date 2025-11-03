#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define STUDENTS_AMOUNT 3
#define NOTES_AMOUNT 4
#define MAX_NOTES 10
#define MIN_NOTES 0

void gerandoArrayNotas(float pontArrayNotas[][NOTES_AMOUNT]);
float maiorNotaSemestre(const float pontArrayNotas[][NOTES_AMOUNT]);
float menorNotaSemestre(const float pontArrayNotas[][NOTES_AMOUNT]);
float mediaAluno(const float pontArrayNotas[][NOTES_AMOUNT], int I);

/*Manipulacão de um array multidimensional notas*/
int main(){
    float notas[STUDENTS_AMOUNT][NOTES_AMOUNT];
    int decision, i, j;

    gerandoArrayNotas(notas);

    puts("Digite 1 para ver a maior nota do semestre");
    puts("Digite 2 para ver a menor nota do semestre");
    puts("Digite 3 apra ver a média de um aluno em específico");
    scanf("%d", &decision);

    switch (decision){
    case 1:
        printf("A maior nota do semestre e: %.1f \n", maiorNotaSemestre(notas));
        break;
    case 2:
        printf("A menor nota do semestre e: %.1f \n", menorNotaSemestre(notas));
        break;
    case 3:
        puts("Digite a linha: ");
        scanf("%d", &i);

        printf("A media do aluno e: %.1f", mediaAluno(notas, i));
        break;
    default:
        puts("Valor inválido");
        break;
    }


    return 0;
}

void gerandoArrayNotas(float pontArrayNotas[][NOTES_AMOUNT]){

    srand(time(NULL));
    for(int i = 0; i < STUDENTS_AMOUNT; i++){
        for(int j = 0; j < NOTES_AMOUNT; j++){
            pontArrayNotas[i][j] = ((float)rand()/RAND_MAX) * MAX_NOTES;
        }
    }

    puts("Array notas gerado: ");
    for(int i = 0; i < STUDENTS_AMOUNT; i++){
        printf("Student's notes %d: ", i+1);
        for(int j = 0; j < NOTES_AMOUNT; j++){
            printf("%5.1f", pontArrayNotas[i][j]);
        }
        puts(" ");
    }
}

float maiorNotaSemestre(const float pontArrayNotas[][NOTES_AMOUNT]){
    float maior = pontArrayNotas[0][0];

    for(int i = 0; i < STUDENTS_AMOUNT; i++){
        for(int j = 0; j < NOTES_AMOUNT; j++){
            if(maior < pontArrayNotas[i][j]){
                maior = pontArrayNotas[i][j];
            }
        }
    }

    return maior;
}

float menorNotaSemestre(const float pontArrayNotas[][NOTES_AMOUNT]){
    float menor = pontArrayNotas[0][0];

    for(int i = 0; i < STUDENTS_AMOUNT; i++){
        for(int j = 0; j < NOTES_AMOUNT; j++){
            if(menor > pontArrayNotas[i][j]){
                menor = pontArrayNotas[i][j];
                printf("Menor: %.1f \n", menor);
                printf("pontArrayNotas[%d][%d]: %.1f \n", i, j, pontArrayNotas[i][j]);
            }
        }
    }

    return menor;    
}

float mediaAluno(const float pontArrayNotas[][NOTES_AMOUNT], int I){
    float media = 0;
    for(int j = 0; j < NOTES_AMOUNT; j++){
        media += pontArrayNotas[I][j]; 
    }
    media /= NOTES_AMOUNT;

    return media;
}