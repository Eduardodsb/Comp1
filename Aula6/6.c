#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void){

  int n[100], j, i;
  float m[10];

  srand(time(NULL));

  for(i=0; i<100; i++){
    j=rand();
    j=j%11;
    n[j]=n[j]+j;
  }

  for(i=0; i<=10; i++){
    m[i]=(float)n[i]/i;
    printf("foram sorteados %f númeoros %d: \n", m[i], i);
  }

  return 0;
}
