#include<stdio.h>
int main (void){

  int nl,j,i,nc;
  i=0;
  j=0;
  printf("Entre com um número de linhas\n");
  scanf("%d", &nl);

  printf("Entre com um número de colunas\n");
  scanf("%d", &nc);

  for(i=0;i<nl;i++){
    for(j=0;j<nc;j++){
      printf("*");
    }
    printf("\n");
  }


  return 0;
}
