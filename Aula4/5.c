#include<stdio.h>
int main (void){

  int n,j,i;
  i=0;
  j=0;
  printf("Entre com um número positivo\n");
  scanf("%d", &n);

  for(i=0;i<n;){
    for(j=0;j<n;j++){
      printf("*");
    }
    printf("\n");
    n--;
  }


  return 0;
}
