#include<stdio.h>
int main (void){

  int n, i, j;
  i=0;
  j=0;


while(j==0){
printf("Entre com um número positivo\n");
scanf("%d", &n);

  if(n>0){

    while(i<n){
      printf("*");
      i++;
      j=1;
    }

    printf("\n");

  }else{

    printf("Valor inválido\n");
    j=0;
  }
}

  return 0;
}
