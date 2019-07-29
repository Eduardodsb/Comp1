#include<stdio.h>
int main (void){

  int n,i,k, contpar, contimpar;
  contpar=0;
  contimpar=0;

  printf("Entre com um a quantidade de números\n");
  scanf("%d", &k);

for(i=0; i < k; i++){

  printf("Entre com um número\n");
  scanf("%d", &n);

  if(n%2 == 0 ){
    printf("Par\n");
    contpar++;
  }else{
    printf("Impar\n");
    contimpar++;
  }

}

printf("Existem %d pares\n", contpar);
printf("Existem %d impares\n", contimpar);
return 0;
}
