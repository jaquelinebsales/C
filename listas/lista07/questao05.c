struct Disciplina{
    char *nomeDisciplina;
    int *semestre;
    int cargaHoraria;
};

struct Professor{
    char *nomeProfessor;
    char *formacaoAcademica;
    struct Disciplina disciplina;
};

int main(){
    
    return 0;
}