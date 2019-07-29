#include<stdio.h>
#define dim 512

void selection_sort(int v[], int n);

int main(void){
  int v[dim],n,i;
  printf("Entre com a quantidade de elementos:\n");
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &v[i]);
  }
  selection_sort(v,n);
  for(i=0;i<n;i++){
    printf("%d", v[i]);
  }
  return 0;
}

void selection_sort(int v[], int n){
  int maior = 0, temp, maiorI, i;
  for(i=0;i<n;i++){
    if(maior<v[i]){
      maior = v[i];
      maiorI=i;
    }
  }
  if(n == 2 && v[1] < v[0]){
    temp = v[0];
    v[0] = v[1];
    v[1] = temp;
  }else if(n>2){
    temp = v[n-1];
    v[n-1] = maior;
    v[maiorI] = temp;
    selection_sort(v,n-1);
  }
}
