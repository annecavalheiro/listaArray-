/*
 Questão 2
 Leia n números inteiros no intervalo [0,50] e os armazene em um vetor estaticamente
 alocado com 100 posições. Preencha um segundo vetor com os números ímpares do primeiro.
 Imprima os dois vetores, 10 elementos por linha.
 Comentários:
 - Declaração: int v[100], impares[100], n, i, j, k;
 - Entrada: n e os n valores
 - Processamento: filtragem de ímpares
 - Saída: impressão formatada 10 por linha
*/
#include <stdio.h>

void imprime_ints(int *a, int len){
    int i;
    for(i=0;i<len;i++){
        printf("%3d ", a[i]);
        if((i+1)%10==0) printf("\n");
    }
    if(len%10) printf("\n");
}

int main(){
    int v[100] = {0}, impares[100] = {0};
    int n, i, j=0;
    printf("Quantos números (0..100)? ");
    if(scanf("%d",&n)!=1) return 0;
    if(n<0) n=0;
    if(n>100) n=100;
    for(i=0;i<n;i++){
        do{
            printf("Digite v[%d] (0..50): ", i);
            if(scanf("%d",&v[i])!=1) return 0;
        } while(v[i]<0 || v[i]>50);
        if(v[i]%2!=0){
            impares[j++] = v[i];
        }
    }
    printf("\nVetor original (%d elementos):\n", n);
    imprime_ints(v, n);
    printf("\nVetor impares (%d elementos):\n", j);
    imprime_ints(impares, j);
    return 0;
}
