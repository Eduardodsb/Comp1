#include<stdio.h>
#define dim 21
int main(void){
  int i;
  char frase[dim];

  gets(frase);
  for(i=0; i<dim; i++){

    if(frase[i] >= 'a' && frase[i]<='z'){
      frase[i] = (frase[i] - 'a') + 'A';
    }
  }

  puts(frase);

  return 0;
}
