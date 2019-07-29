#include<stdio.h>

void converter(int NumeroBase10, int NumeroBase2[32]);

int main(void){
  int NumeroBase10, NumeroBase2[32], teste =1, i;

  while(1){
    printf("Digite o núemro na base 10\n");
    scanf("%d", &NumeroBase10);
    if(NumeroBase10<0) break;

    converter(NumeroBase10, NumeroBase2);

    printf("Teste %d\n", teste++);
    printf("%d na base 2 é: ", NumeroBase10);
    for(i=0; i<32; i++){
      printf("%d", NumeroBase2[i]);
    }
    printf("\n\n");
  }

  return 0;
}

void converter(int NumeroBase10, int NumeroBase2[32]){
  int i, NewN;
  NewN = NumeroBase10;
  for(i=0; i<32; i++){
    NumeroBase2[i] = 0;
  }
  for(i=0; i<32; i++){
    NumeroBase2[31-i] = NewN%2;
    NewN = NewN/2;
    if(NewN == 0){
    i = 32;
    }
   }
}
