#include<stdio.h>
int main(void){

  int n, cont;
  cont=1;
  printf("Digite um número: \n");
  scanf("%d", &n);

  printf("%d ", n);

  for(;n!=1;){
    if(n%2!=0){
      n=3*n+1;
    }else{
      n=n/2;
    }
    printf("%d ", n);
    cont++;
  }
  printf("\n");
  printf("A quantidade de ciclos é: %d\n", cont);
  return 0;
}
