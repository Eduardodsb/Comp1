#include<stdio.h>

int main (void){

int A, B, C, D;

 scanf("ENTRE COM NÚMERO 1: %i", &A);
 scanf("ENTRE COM NÚMERO 2: %i", &B);
 scanf("ENTRE COM NÚMERO 3: %i", &C);

   if(A>B){
   D = A;
   A = B;
   B = D; 
  }

   if(B>C){
   D = B;
   B = C;
   C = D; 
  }

   if(A>B){
   D = A;
   A = B;
   B = D; 
  }

printf("%i %i %i \n", A, B, C);


return 0;
}
