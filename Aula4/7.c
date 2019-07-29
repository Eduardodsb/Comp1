#include<stdio.h>
int main (void){
int dia1, dia2, mes1, mes2, ano1, ano2;

printf("Digite a data1\n");
scanf("%d%d%d",&dia1,&mes1,&ano1);

printf("Digite a data2\n");
scanf("%d%d%d",&dia2,&mes2,&ano2);


if(ano1>ano2){
  printf("A data mais recente é data1\n");
}else if(ano2>ano1){
  printf("A data mais recente é data2\n");
}else if(ano1==ano2){

  if(mes1>mes2){
    printf("A data mais recente é data1\n");
  }else if(mes2>mes1){
    printf("A data mais recente é data2\n");
  }else if(mes1==mes2){

    if(dia1>dia2){
      printf("A data mais recente é data1\n");
    }else{
      printf("A data mais recente é data2\n");
    }

  }


}


return 0;
}
