#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
  int n[100], i;

  srand(time(NULL));

  for(i=0; i<100; i++){
    n[i]=rand();
    n[i]=n[i]%11;
    printf("%d ", n[i]);
  }

  printf("\n");

  for(i=99; i>=0; i--){
    printf("%d ", n[i]);

  }

  printf("\n");

  return 0;
}
