#include<stdio.h>
int main (void){
    int s,n,a1,an;

    a1=0;
    printf("Digite o último número:");
    scanf("%d", &an);

    n=an+1;
    s=(a1+an)*n/2;

    printf("A soma dos termos é igual a: %d\n", s);
    return 0;
}
