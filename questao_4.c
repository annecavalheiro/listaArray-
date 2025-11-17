/*
 Questão 4
 Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
*/
#include <stdio.h>

int main(){
    int v[10], i;
    for(i=0;i<10;i++){
        printf("Digite v[%d]: ", i);
        if(scanf("%d",&v[i])!=1) return 0;
        if(v[i] < 0) v[i] = 0; // processamento
    }
    printf("Vetor resultante:\n");
    for(i=0;i<10;i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
