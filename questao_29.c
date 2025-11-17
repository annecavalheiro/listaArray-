/*
 Questão 29
 Leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores do primeiro
 e nas posições ímpares os valores do segundo.
*/
#include <stdio.h>

int main(){
    int A[10], B[10], C[10], i;
    for(i=0;i<10;i++){ printf("A[%d]: ", i); scanf("%d", &A[i]); }
    for(i=0;i<10;i++){ printf("B[%d]: ", i); scanf("%d", &B[i]); }
    for(i=0;i<10;i++){
        if(i%2==0) C[i]=A[i];
        else C[i]=B[i];
    }
    printf("Vetor C:\n"); for(i=0;i<10;i++) printf("%d ", C[i]); printf("\n");
    return 0;
}
