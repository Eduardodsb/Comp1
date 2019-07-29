#include<stdio.h>
#include<math.h>
int cont=0;
int PegaUnidade(int N);
int PegaDezena(int N);
int PegaCentena(int N);
int PegaMilhar(int N);

int main(void){
  int N, i, cont=0;
  printf("digite um número:\n");
  scanf("%d", &N);

  i=N;
  while(i>0){
  i=i/10;
  cont++;
  }

  if((pow(PegaUnidade(N),cont)+pow(PegaDezena(N),cont)+pow(PegaCentena(N),cont)+pow(PegaMilhar(N),cont)) == N){
    printf("S\n");
  }else{
    printf("N\n");
  }
  return 0;
}

int PegaUnidade(int N){
  return N%10;
}
int PegaDezena(int N){
  return (N/10)%10;
}
int PegaCentena(int N){
  return (N/100)%10;
}
int PegaMilhar(int N){
  return (N/1000)%10;
}
