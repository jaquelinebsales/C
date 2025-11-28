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
        puts("<qnt. produtos> <tam. nome>");
        exit(1);
    }

    int cont = 0;
    int quantProdutos = atoi(argv[1]);
    int tamNome =  atoi(argv[2]);
    struct Estoque *produtos;
    produtos = malloc(sizeof(struct Estoque)*quantProdutos);

    for(int i = 0; i < quantProdutos; i++){
        (produtos+i)->nomePeca = malloc(tamNome*sizeof(char));
    }

    for(int i = 0; i < quantProdutos; i++){

        puts("Digite o nome do produto: ");
        fgets((produtos+i)->nomePeca, tamNome, stdin);

        puts("Digite o número da peça: ");
        scanf("%d", &((produtos+i)->nPeca));

        puts("Digite o preço da peça: ");
        scanf("%f", &((produtos+i)->precoPeca));
        getchar();
        cont++;
        ((produtos+i)->nPedido) = cont;
    }

    for(int i = 0; i < quantProdutos; i++){
        printf("%8s", (produtos+i)->nomePeca);
        printf("%5d \n", (produtos+i)->nPeca);
        printf("%5.2f \n", (produtos+i)->precoPeca);
        printf("%5d \n", (produtos+i)->nPedido);
        puts("");
    }

    for(int i = 0; i < quantProdutos; i++){
        free((produtos+i)->nomePeca);
    }

    free(produtos);

    return 0;
}