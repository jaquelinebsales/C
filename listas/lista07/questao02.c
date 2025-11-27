#include <stdio.h>
#include <stdlib.h>
struct Estoque{
    char *nomePeca;
    int nPeca;
    float precoPeca;
    int nPedido;
};

int main(int argc, char **argv){
    if(argc != 3){
        puts("Uso: ");
        printf(" %s <qnt. produtos> <tam. nome>", *argv);
        exit(1);
    }

    char res;
    int cont = 0;
    int quantProdutos = atoi(argv[1]);
    int tamNome =  atoi(argv[2]);
    struct Estoque *produtos;
    produtos = malloc(sizeof(struct Estoque)*quantProdutos);

    for(int i = 0; i < quantProdutos; i++){
        produtos->nomePeca = malloc(tamNome*sizeof(char));
    }

    for(int i = 0; i < quantProdutos; i++){
        puts("Digite o nome do produto: ");
        fgets((produtos+i)->nomePeca, tamNome, stdin);

        puts("Digite o número da peça: ");
        scanf("%d", &((produtos+i)->nPeca));

        puts("Digite o preço da peça: ");
        scanf("%f", &((produtos+i)->precoPeca));

        cont++;
        ((produtos+i)->nPedido) = cont;
    }

    for(int i = 0; i < quantProdutos; i++){
        printf("%10s", (produtos+i)->nomePeca);
        printf("%5d", (produtos+i)->nPeca);
        printf("%5f", (produtos+i)->precoPeca);
        printf("%5d", (produtos+i)->nPedido);
    }
    return 0;
}