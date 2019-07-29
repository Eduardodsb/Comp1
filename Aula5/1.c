#include<stdio.h>
int main(void){

  int n;

  printf("Digite um número: \n");
  scanf("%d", &n);

  printf("%d\n", n);

  for(;n!=1;){
    if(n%2!=0){
      n=3*n+1;
    }else{
      n=n/2;
    }
    printf("%d\n", n);
  }
  return 0;
}
