/*
 Questão 5
 Ler a nota da prova de 15 alunos e calcular e imprimir a média geral.
 Usa funções: ler_notas e calcula_media.
*/
#include <stdio.h>

void ler_notas(float notas[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Nota do aluno %d: ", i+1);
        if(scanf("%f",&notas[i])!=1) { notas[i]=0; }
    }
}

float calcula_media(float notas[], int n){
    int i;
    float soma=0;
    for(i=0;i<n;i++) soma += notas[i];
    return (n>0)? (soma/n) : 0;
}

int main(){
    int n = 15, i;
    float notas[15];
    ler_notas(notas,n);
    printf("Media geral: %.2f\n", calcula_media(notas,n));
    return 0;
}
