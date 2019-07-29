#include<stdio.h>

void desenha(int n, int m, char fill);

int main(void){
  int n,m;
  char fill;
  printf("Digite a quantidade de linhas e de colunas respectivamente:\n");
  scanf("%d %d", &n, &m);
  printf("Digite o caracter que será desenhado:\n");
  getchar();
  fill = getchar();
  desenha(n,m,fill);
  return 0;
}

void desenha(int n, int m, char fill){
  int i, j;
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      putchar(fill);
    }
    printf("\n");
  }
}
