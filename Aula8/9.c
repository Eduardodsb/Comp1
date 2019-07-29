#include<stdio.h>
#include<math.h>
int digitos_inversos(int n);

int main(void){
  int n;
  printf("Digite um número:\n");
  scanf("%d", &n);
  printf("%d\n", digitos_inversos(n));
  return 0;
}

int digitos_inversos(int n){
  int cont, i, new, d, expo;
  cont = expo = new = 0;
  i=n;
  while(i>0){
  i=i/10;
  cont++;
  }
  expo=cont-1;
  for(i=0; i<cont; i++){
    d = pow(10,i);
    new += ((n/d)%10)*pow(10,expo); /*primeiro descubro a unidade através de (n/d)%10 e será a nova unidade maior. faço isso atraves ((n/d)%10)*pow(10,expo) */
    expo--;
  }
  return new;
}
