#include<stdio.h>
#define dim 1001


int main(void){
  int N, i;
  char C[dim], inicio;
  inicio = 'N';
  N=1;

  while(N != 0){
    scanf("%d", &N); /*quantidade de comandos*/
    for(i=0; i<N; i++){
      scanf("%s", C);

      if (inicio == 'N' && C[0] == 'D'){
        inicio = 'L';
      }else if (inicio == 'N' && C[0] == 'E'){
        inicio = 'O';
      }else if (inicio == 'O' && C[0] == 'E'){
        inicio = 'S';
      }else if (inicio == 'O' && C[0] == 'D'){
        inicio = 'N';
      }else if (inicio == 'L' && C[0] == 'E'){
        inicio = 'N';
      }else if (inicio == 'L' && C[0] == 'D'){
        inicio = 'S';
      }else if (inicio == 'S' && C[0] == 'E'){
        inicio = 'L';
      }else if (inicio == 'S' && C[0] == 'D'){
        inicio = 'O';
      }

    }
    if(N!=0){
      printf("%c\n", inicio);
      inicio = 'N';
    }
  }
  return 0;
}
