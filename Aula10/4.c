#include <stdio.h>
#include <math.h>

typedef struct _PONTO
{
  float x,y;
} PONTO;

typedef struct _CIRCUNFERENCIA
{
  float raio;
  PONTO centro;
} CIRCUNFERENCIA;

void contidoOuNao(PONTO p1, CIRCUNFERENCIA c);

int main(void){
  PONTO p1;
  CIRCUNFERENCIA c;

  printf("Digite o 1° ponto\n");
  scanf("%f %f", &p1.x, &p1.y);
  printf("Digite as coordenadas da origem da circunferência\n");
  scanf("%f %f", &c.centro.x, &c.centro.y);
  printf("Digite o valor do raio da circunferência\n");
  scanf("%f", &c.raio);
  contidoOuNao(p1, c);

  return 0;
}

void contidoOuNao(PONTO p1, CIRCUNFERENCIA c)
{
  if ((pow(p1.x-c.centro.x,2) + pow(p1.y-c.centro.y,2)) <= (pow(c.raio,2)))
  {
    printf("Está contido.\n");
  }
  else
  {
    printf("Não está contido.\n");
  }
}
