#include<stdio.h>
#include<stdlib.h>

int main(void){
  int *a, mais;
  unsigned long long int inicial;
  inicial = 1073741824; /* requisitando 1gb // 1073741824 bytes = 1gb */
  mais = 1073741824; /*Adicionado mais um 1gb*/
  while(mais>0){
    a = (int*) malloc(inicial);
    if(a == NULL) {
        inicial=inicial-mais;
        mais=mais/2;
    }
    inicial=inicial+mais;
    free(a);
  }
  printf("Memoria estorou\n");
  printf("Memoria usada: %lld Bytes\n", inicial);
  printf("Memoria usada: %lld KiloBytes\n", inicial/1024);
  printf("Memoria usada: %lld MegaBytes\n", inicial/1048576);
  printf("Memoria usada: %lld GigaBytes\n", inicial/1073741824);
  return 0;
}
