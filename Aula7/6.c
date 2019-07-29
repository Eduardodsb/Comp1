#include<stdio.h>
#include<string.h>
#define dim 1001
int main(void){

  char frase[dim];
  int tamanho, i, cont=0;

  gets(frase);
  tamanho = strlen(frase) - 1; /*devido ao fato do tamanho não considerar a posição 0*/

  for(i=0; i<dim; i++){

    if(frase[i] >= 'a' && frase[i]<='z'){
      frase[i] = (frase[i] - 'a') + 'A';
    }
  }

  for(i=0; i<tamanho; i++){
    if(frase[i] == frase[tamanho-i]){
      cont++;
    }
  }

if(cont == tamanho){
  printf("É um palı́ndromo. \n");
}else{
  printf("Não é um palíndromo. \n");
}

  return 0;
}
