#include<stdio.h>
int main(void){
    float notaAluno;
    float mediaAluno = 0.0;
    int notasLidas = 0;
    int quantProvas ;

    printf("Digite a quantidade de provas:");
    scanf("%d", &quantProvas);

    while(notasLidas < quantProvas ){
        printf("Digite a nota:");
        scanf("%f", &notaaluno);
        mediaAluno = notaaluno + mediaAluno;
        notasLidas = notasLidas+1;

    }

    mediaAluno = mediaAluno / quantProvas ;
    printf("A media do aluno foi %f\n", mediaAluno );
    if(mediaAluno >= 5.0) {
        printf("Aprovado\n");
    }else{
    printf("Reprovado ");

    return 0;
}
