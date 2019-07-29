#include<stdio.h>

int main(void){
  char c;
  int i;
  printf("Entre com um numero inteiro \n");
  scanf("%d", &i);
  printf("Agora um caractere.\n");
  getchar();
  c = getchar();
  printf("Numero lido%d\n",i);
  printf("Caractere lido %c \n", c);
return 0;
}
