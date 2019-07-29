#include<stdio.h>

int Fib(int N);

int main(void){
  int N;
  printf("Entre com a posição desejada:\n");
  scanf("%d", &N);
  printf("O valor na %d° posição é: %d\n", N, Fib(N));
  return 0;
}

int Fib(int N){
  if(N==1){
    return 0;
  }else if(N==2){
    return 1;
  }
  return Fib(N-1) + Fib(N-2);
}
