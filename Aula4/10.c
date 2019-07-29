#include<stdio.h>
int main (void){

int n, gp, gc, i, pontos;
i=0;
pontos=0;

printf("Entre com um número de jogos\n");
scanf("%d", &n);

  while(i<n){
    printf("Entre com o número de gols feitos e sofridos\n");
    scanf("%d%d", &gp, &gc);

    if(gp>gc){
      pontos = 3 + pontos;
    }else if(gp == gc){
      pontos = 1 + pontos;
     }

     i++;
  }

  printf("%d", pontos);

return 0;
}
