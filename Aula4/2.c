#include<stdio.h>
int main (void){

  int n, i;
  i=0;

  printf("Entre com um número positivo\n");
  scanf("%d", &n);
  if(n>0){
  while(i<n){
    printf("*");
    i++;
  }
  printf("\n");
}
else{
  printf("Valor inválido\n");

}


  return 0;
}
