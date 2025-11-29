int funcao(int a, int b);

int main(){
    int (*ponteiro)(int a, int b);
    ponteiro = funcao;

    return 0;
}

int funcao(int a, int b){
    return a+b;
}