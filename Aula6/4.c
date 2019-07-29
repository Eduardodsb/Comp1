#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){

  int n[15], i, j;
  srand(time(NULL));

  printf("digite  a quantidade desejada: \n");
  scanf("%d", &j);

  for(i=0; i<j; i++){
    n[i]=rand();
    n[i]=(n[i]%66)+1;
    printf("%d ", n[i]);
  }
  printf("\n");



  return 0;
}
