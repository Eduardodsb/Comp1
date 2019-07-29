#include<stdio.h>
int main (void){

int n, i;
i=0;

printf("Entre com um número positivo\n");
scanf("%d", &n);

while(i<n){
  printf("*");
i++;
}
printf("\n");


return 0;
}
