#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
  int i, x1, y1, cont;
  double x, y, conta;
  cont=0;
  srand(time(NULL));

  for(i=0; i<9999999; i++){
    x1=rand();
    y1=rand();

    x1=x1%1000001;
    y1=y1%1000001;

    x=(double)x1/1000000;
    y=(double)y1/1000000;



    if(x*x + y*y <= 1){
      cont++;
    }
  }

  printf("\n");
  conta=(4*(double)cont)/9999999;
  printf("o valor da conta é %lf", conta);



  return 0;
}
