#include<stdio.h>

long long power(int x, int n);

int main(void){
  int x, n;
  printf("Entre com a base e o expoente:\n");
  scanf("%d%d", &x, &n);
  printf("O resultado é: %lld\n", power(x,n));
  return 0;
}

long long int power(int x, int n){
  if(n==0){
    return 1;
  }
  if(n==1){
    return x;
  }
  if(n%2==0){
    return power(x,n/2)*power(x,n/2);
  }else{
    return power(x,n/2)*power(x,n/2)*x;
  }

}
