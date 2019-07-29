#include<stdio.h>
#include<string.h>
#define dim 135

int main(void){
  int i, cont[dim];
  char frase[dim];

  for(i=0;i<dim;i++){
    cont[i] = 0;
  }

  gets(frase);
  for(i=0;i<strlen(frase);i++){
    cont[frase[i] - 'A']++;
  }

  for(i=0; i<25; i++){
    cont[i]+=cont[i+32];/*serve para pegar as letras minúsculas*/
    printf("A frequência de %c é: %1.2f %%\n", 'A' + i, ((float)cont[i]/strlen(frase))*100);
  }
  return 0;
}
