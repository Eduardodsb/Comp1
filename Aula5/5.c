#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ( void ) {
  int i , n, contp, conti;
  float freqp, freqi;
  contp=0;
  conti=0;
  srand(time(NULL));

  for(i=0; i<1000000; i++){
  n=rand();
  n=n%RAND_MAX;

  if(n%2==0){
    contp++;
  }else{
    conti++;
  }
  }

  freqp=((float)contp/1000000)*100;
  freqi=((float)conti/1000000)*100;

  printf("ímpar: %d  par: %d\n", conti, contp);
  printf("%f porcento é a frequência de pares \n", freqp);
  printf("%f porcento é a frequência de ímpares \n", freqi);

  return 0;
}
