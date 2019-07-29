#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void){

  int n[100], i, cont;
  float media;
  cont=0;
  srand(time(NULL));

  for(i=0; i<100; i++){
    n[i]=rand();
    n[i]=n[i]%11;
    media=media+n[i];
  }

  media=media/100;

  for(i=0; i<100; i++){
    if(n[i]>media){
      cont++;
    }
  }

  printf("%d acima da média", cont);

  return 0;
}
