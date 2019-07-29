#include <stdio.h>
int main(void){
  int var; /*var e um inteiro*/
  int *varPtr; /* varPtr e um ponteiro para inteiros*/
  var = 7;
  varPtr = &var; /*varPtr aponta para onde esta var*/
  printf("O endereco de var é %p\nO valor de varPtr é %p\n", &var, varPtr) ;
  printf("O valor de var é %d\nO valor que varPtr aponta é %d\n", var, *varPtr) ;
  /*Para os fortes*/
  printf("Mostrando que * e & sao complementares\n&*varPtr = %p\n*&varPtr = %p\n ", &*varPtr , *&varPtr ) ;
  return 0;
}
