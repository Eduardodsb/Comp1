#include<stdio.h>
int main (void){

  int n,i,k, contimpar;
  contimpar=0;

  printf("Entre com um a quantidade de números\n");
  scanf("%d", &k);

  for(i=0; i < k; i++){

    printf("Entre com um número\n");
    scanf("%d", &n);
    contimpar = (n%2) + contimpar;

  }
  printf("Existem %d impares\n", contimpar);
  return 0;
}
