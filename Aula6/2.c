#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ( void ) {
  int i , n, cont1, cont2, cont3, cont4, cont5, cont6;
  float freq1, freq2, freq3, freq4, freq5, freq6;
  cont1=0;
  cont2=0;
  cont3=0;
  cont4=0;
  cont5=0;
  cont6=0;

  srand(time(NULL));

  for(i=0; i<6000000; i++){
  n=rand();
  n=(n%6)+1;
  printf("%d ", n);

  switch (n){
    case 1:
      cont1++;
      break;
    case 2:
      cont2++;
      break;
    case 3:
      cont3++;
      break;
    case 4:
      cont4++;
      break;
    case 5:
      cont5++;
      break;
    case 6:
      cont6++;
      break;
  }
  }


  freq1=((float)cont1/6000000)*100;
  freq2=((float)cont2/6000000)*100;
  freq3=((float)cont3/6000000)*100;
  freq4=((float)cont4/6000000)*100;
  freq5=((float)cont5/6000000)*100;
  freq6=((float)cont6/6000000)*100;
  printf("\n");

  printf("%f porcento é a frequência de 1 \n", freq1);
  printf("%f porcento é a frequência de 2 \n", freq2);
  printf("%f porcento é a frequência de 3 \n", freq3);
  printf("%f porcento é a frequência de 4 \n", freq4);
  printf("%f porcento é a frequência de 5 \n", freq5);
  printf("%f porcento é a frequência de 6 \n", freq6);

  return 0;
}
