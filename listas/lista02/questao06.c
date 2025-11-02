#include <stdio.h>

void main(){
   int voto;
   char confirm;
   int contagem_paulo = 0;
   int contagem_renata = 0;
   int contagem_nulo = 0;
   int contagem_branco = 0;
   int total_votos = 0;

   puts("-----URNA-----");
   do{
       puts("Digite 5 para Paulo");
       puts("Digite 7 para Renata");
       puts("Digite 0 para votar em branco");
       puts("Digite qualquer valor para votar em branco");
       scanf("%d", &voto);

       if(voto < 0){
            puts("Execucao encerrada.");
            break;
        }
       puts("Confirmar voto[S/n]: ");
       scanf(" %c", &confirm);


       if(confirm == 'S'){
           puts("Voto confirmado!");

           switch(voto){
               case 5:
                   contagem_paulo++;
               break;
               case 7:
                   contagem_renata++;
               break;
               case 0:
                   contagem_branco++;
               break;
               default:
                   contagem_nulo++;
               break;
           }
       }else{
           puts("Voto nao cadastrado.");
       }
   }while(voto>=0);


   if (contagem_paulo == contagem_renata){
       puts("Empate!");
   }else if(contagem_paulo < contagem_renata){
       puts("Renata ganhou!");
   } else {
       puts("Paulo ganhou!");
   }
   total_votos = contagem_branco + contagem_nulo + contagem_paulo + contagem_renata;

   printf("Porcentagem de votos de Paulo: %.2f%% \n", ((float)contagem_paulo*100)/total_votos);
   printf("Porcentagem de votos de Renata: %.2f%% \n", ((float)contagem_renata*100)/total_votos);
   printf("Porcentagem de votos em branco: %.2f%% \n", ((float)contagem_branco*100)/total_votos);
   printf("Porcentagem de votos nulos: %.2f%% \n", ((float)contagem_nulo*100)/total_votos);
}
