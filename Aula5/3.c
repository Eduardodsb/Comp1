#include<stdio.h>
int main(void){

  int n, i, j, cont, maiorcont;
  maiorcont=0;
  cont=1;
  printf("Digite um intervalo: \n");
  scanf("%d %d", &i, &j);
  printf("%d %d ", i, j);

  for(;i<=j;i++){
    n=i;
    for(;n!=1;){
      if(n%2!=0){
        n=3*n+1;
      }else{
        n=n/2;
      }
      cont++;
    }
    if (maiorcont<cont){
      maiorcont = cont;
    }
    cont=1;
  }
  printf("\n");
  printf("A maior quantidade de ciclos foi: %d\n", maiorcont);
  return 0;
}
