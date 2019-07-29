#include<stdio.h>
int main(void){
    float nota, mediaaluno;
    printf("Digite a nota 1\n");
    scanf("%f",&nota);
    mediaaluno=nota;
    printf("Digite a nota 2\n");
    scanf("%f",&nota);
    mediaaluno=nota+mediaaluno;
    printf("Digite a nota 3\n");
    scanf("%f",&nota);
    mediaaluno=nota+mediaaluno;
    mediaaluno=mediaaluno/3;
    printf("A média do aluno é: %f\n",mediaaluno);
    if(mediaaluno>=5){
        printf("O aluno foi aprovado\n");
    }else{
        printf("O aluno foi reprovado\n");
    }
return 0;
}
