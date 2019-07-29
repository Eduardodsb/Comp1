#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ( void ) {
  int i , n ;
  int max = 100;

/* srand inicializa o gerador de numeros randomicos.
---- So preisa aparecer uma vez no inicio do programa.
---- time ( NULL ) retorna o numero de segundos que aconteceram desde 01/01/1970
---- srand deve receber um inteiro para inicializar o gerador de numeros randomicos.
Costuma - se usar o numero de segundos fornecido por time ( NULL ).
*/

  srand(time( NULL ));
  for( i = 0; i < 10; i ++) {
    n=rand(); /* gera um número inteiro entre 0 e RAND_MAX */
    n =n%max ; /* passa este numero para o intervalo 0 - max */
    printf ("%d \n ", n);
  }
  return 0;
}
