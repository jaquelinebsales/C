#include <stdio.h>
#include <windows.h>

struct Aluno{
    float nota1;
    float nota2;
    float media;
};

int main(){
    SetConsoleOutputCP(65000);

    struct Aluno aluno;
    
    puts("Digite a nota1: ");
    scanf("%f", &(aluno.nota1));

    puts("Digite a nota 2: ");
    scanf("%f", &(aluno.nota2));

    aluno.media = (aluno.nota1 + aluno.nota2)/2;

    printf("NOTA 1: %.2f \n", aluno.nota1);
    printf("NOTA 2: %.2f \n", aluno.nota2);
    printf("MÉDIA: %.2f \n", aluno.media);
    return 0;
}