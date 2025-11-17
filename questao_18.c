/*
 Questão 18
 Leia 10 conjuntos de dois valores: número do aluno e altura. Encontre o mais baixo e o mais alto.
*/
#include <stdio.h>

int main(){
    int i, num, num_alt_baixo=0, num_alt_alto=0;
    double altura, menor_alt, maior_alt;
    for(i=0;i<10;i++){
        printf("Aluno %d - numero: ", i+1);
        if(scanf("%d", &num)!=1) return 0;
        printf("Aluno %d - altura (m): ", i+1);
        if(scanf("%lf", &altura)!=1) return 0;
        if(i==0 || altura < menor_alt){
            menor_alt = altura; num_alt_baixo = num;
        }
        if(i==0 || altura > maior_alt){
            maior_alt = altura; num_alt_alto = num;
        }
    }
    printf("Aluno mais baixo: numero %d, altura %.2f m\n", num_alt_baixo, menor_alt);
    printf("Aluno mais alto: numero %d, altura %.2f m\n", num_alt_alto, maior_alt);
    return 0;
}
