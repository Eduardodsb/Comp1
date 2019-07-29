#include<stdio.h>
int main (void){

int a,b,c,t;

 printf("ENTRE COM NÚMERO 1:");
 scanf("%i", &a);
 printf("ENTRE COM NÚMERO 2:");
 scanf("%i", &b);
 printf("ENTRE COM NÚMERO 3:");
 scanf("%i", &c);

if (a > b){

  t = a;
  a = b;
  b = t;

}

if (b >c){

  t = b;
  b = c;
  c = t;

}

if (a > b){

  t = a;
  a = b;
  b = t;

}

printf("%i %i %i \n", a, b, c);
return 0;
}
