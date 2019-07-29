#include<stdio.h>
#include<string.h>
#define dim 200
int OndeEsta(char frase1[], char frase2[]);

int main(void){
  char frase1[dim], frase2[dim];
  printf("Digite a primeira frase:\n");
  scanf("%s", frase1);
  printf("Digite a segunda frase:\n");
  scanf("%s", frase2);

  if(OndeEsta(frase1, frase2) == -1){
    printf("A primeira frase não está contida na segunda.\n");
  }
  return 0;
}

int OndeEsta(char frase1[], char frase2[]){
  int i, j, contE = 0, contC =0, PI, PF;
  /*Convertendo tudo pra maiúsculo*/
  for(i=0; i<strlen(frase1); i++){
    if(frase1[i] >= 'a' && frase1[i]<= 'z'){
      frase1[i] = (frase1[i] - 'a') + 'A';
    }
  }
  for(i=0; i<strlen(frase2); i++){
    if(frase2[i] >= 'a' && frase2[i]<= 'z'){
      frase2[i] = (frase2[i] - 'a') + 'A';
    }
  }
  /* fim da conversão*/
 /*comparação*/
  for(i=0; i<strlen(frase1); i++){
    for(j=i; j<strlen(frase2); j++){
      if(frase1[i] != frase2[j] && frase2[j] != '0'){
        frase2[j] = '0';
      }
      if(frase1[i] != frase2[j] && contC>0){
        contE++;
        i=strlen(frase2);
        j=strlen(frase2);
        return -1;
      }
      if(frase1[i] == frase2[j] && frase2[j+1]!= frase2[j]){
        PF = j+1;
        frase2[j] = '0';
        contC++;
        break;
      }
    }
  }

  puts(frase1);
  puts(frase2);

  if(contC == strlen(frase1)){
      PI = strlen(frase2) - PF;
      printf("A primeira frase está contida no interva de %d até %d", PI, PF);
  }else{
    printf("aquui");
    return -1;
  }
  /*fim da comparção com o resultado já*/
}
