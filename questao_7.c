/*
 Questão 7
 Receba dois arrays A e B com 10 inteiros cada. Crie C = A - B e mostre C.
*/
#include <stdio.h>

int main(){
    int A[10], B[10], C[10], i;
    printf("Digite 10 valores para A:\n");
    for(i=0;i<10;i++) scanf("%d",&A[i]);
    printf("Digite 10 valores para B:\n");
    for(i=0;i<10;i++) scanf("%d",&B[i]);
    for(i=0;i<10;i++) C[i] = A[i] - B[i];
    printf("Vetor C (A - B):\n");
    for(i=0;i<10;i++) printf("%d ", C[i]);
    printf("\n");
    return 0;
}
