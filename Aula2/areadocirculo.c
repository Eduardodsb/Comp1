#include<stdio.h>
int main(void){
double area, raio, n;
n = 3.14159;
scanf("%lf", &raio);

area=n*(raio*raio);

printf("A=%1.4lf\n", area);

return 0;
}
