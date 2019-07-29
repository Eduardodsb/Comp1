#include<stdio.h>
int main (void){
  float nota1, nota2, media;
  printf("Digite a nota1 \n");
  scanf("%f", &nota1);

  printf("Digite a nota2 \n");
  scanf("%f", &nota2);

  media = (nota1+nota2)/2;

  if (media >= 5){

     printf("O aluno foi aprovado com  %1.1f \n", media);

  }else{

     printf("O aluno foi reprovado com  %1.1f \n", media);

   }
return 0;

}

