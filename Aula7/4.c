#include<stdio.h>
#include<string.h>
#define dim 81
int main(void){
  int tamanho, i, contm, contM, contl, contb, contr;
  contm = contM = contl = contb = contr = 0;
  char frase[dim];
  fgets(frase, dim, stdin);
  fputs(frase, stdout);
  tamanho = strlen(frase) - 1;
  printf("Esta frase possui %d caracteres \n", tamanho);

  for (i = 0; i < tamanho; i++) {
    if(frase[i]>='a' && frase[i]<='z'){
      contm++;
    }
    if(frase[i]>='A' && frase[i]<='Z'){
      contM++;
    }
    if((frase[i]>='a' && frase[i]<='z')||(frase[i]>='A' && frase[i]<='Z')){
      contl++;
    }
    if(frase[i] == ' '){
      contb++;
    }
    if(frase[i] == 'r' || frase[i] == 'R'){
      contr++;
    }
  }

  if(contr%2 == 0){
    contr/=2;
  }else{
    contr = 0;
  }

  printf("Foram lidas %d letras minúsculas \n", contm);
  printf("Foram lidas %d letras maiúsculas \n", contM);

  printf("Foram Lidas %d letras \n", contl);
  printf("Foram lidos %d espaços em branco \n", contb);

  printf("Essa frase teve %d pares de R \n", contr);
  return 0;

}
