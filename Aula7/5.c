#include<stdio.h>
#define dim 101

int main(void){

  char cadeia[dim];
  int i=0;

  while(i!=1){
    fgets(cadeia, dim, stdin);
    if(cadeia[0] != '\n'){
      fputs(cadeia, stdout);
    }else{
      i=1;
    }
  }

  return 0;
}
