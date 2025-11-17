/*
 Questão 6
 Dado vetor A com 11 elementos que sobe até A[5] e desce depois, proponha algoritmo para ordenar.
 Implementaremos um algoritmo de ordenação simples (bubble sort) para ordenar totalmente.
*/
#include <stdio.h>

int main(){
    int A[11], i,j,aux;
    printf("Leia 11 elementos do vetor A:\n");
    for(i=0;i<11;i++){
        printf("A[%d]: ", i);
        if(scanf("%d",&A[i])!=1) return 0;
    }
    // Ordena (ordem crescente) - processamento
    for(i=0;i<11-1;i++){
        for(j=0;j<11-1-i;j++){
            if(A[j] > A[j+1]){
                aux = A[j]; A[j] = A[j+1]; A[j+1] = aux;
            }
        }
    }
    printf("Vetor ordenado:\n");
    for(i=0;i<11;i++) printf("%d ", A[i]);
    printf("\n");
    return 0;
}
