#include <stdio.h>
#include <math.h>

typedef struct _PONTO
{
  float x,y;
} PONTO;

float Dist(PONTO A, PONTO B);

int main(void){
    PONTO p1, p2;
    printf("Digite o 1° ponto\n");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite o 2° ponto\n");
    scanf("%f %f", &p2.x, &p2.y);
    printf("A distância é: %f\n", Dist(p1,p2));

  return 0;
}
float Dist(PONTO A, PONTO B){
  float dist;
  return dist = sqrt(pow(A.x-B.x, 2) + pow(A.y-B.y, 2));
}
