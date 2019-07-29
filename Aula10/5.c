#include <stdio.h>

typedef struct _TEMPO{
  int hora, minuto, segundo;
} tempo;

int main(void){
  tempo T1, T2;
  float total1, total2;
  printf("Digite os dois tempos\n");
  scanf("%d %d %d %d %d %d", &T1.hora, &T1.minuto, &T1.segundo, &T2.hora, &T2.minuto, &T2.segundo);
  total1 =  (float)(T1.hora * 3600) + (T1.minuto*60) + (T1.segundo);
  total2 =  (float)(T2.hora * 3600) + (T2.minuto*60) + (T2.segundo);
  if(total1 > total2){
    printf("O primeiro tempo é maior\n");
  }else if(total1 < total2){
    printf("O segundo tempo é maior\n");
  }else{
    printf("Os tempos são iguais\n");
  }
  return 0;
}
