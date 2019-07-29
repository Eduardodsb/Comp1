#include<stdio.h>
#define DIM 512

void Amigos(int a, int b);

int main(void){
  int N[DIM], i, j, q;
  printf("Digite a quantidade de pares:\n");
  scanf("%d", &q);
  printf("Digite os pares de números:\n");
  for(i=0; i<q; i++){
  scanf("%d", &N[i]);
  }
  for(j=0; j<q; j+=2){
  Amigos(N[j],N[j+1]);
  }
  return 0;
}

void Amigos(int a, int b){
  int i, contA, contB;
  contA = contB = 0;
  for(i=1; i<=(a/2); i++){
    if(a%i == 0){
      contA += i;
    }
  }
  for(i=1; i<=(b/2); i++){
    if(b%i == 0){
      contB += i;
    }
  }
  if((contA == b) && (contB == a)){
    printf("S\n");
  }else{
    printf("N\n");
  }
}
