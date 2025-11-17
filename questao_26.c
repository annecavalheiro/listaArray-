/*
 Questão 26
 Array A com 6 inteiros: inicializar, somar A[0]+A[1]+A[5], modificar A[4]=100, imprimir valores.
*/
#include <stdio.h>

int main(){
    int A[6] = {1,0,5,-2,-5,7};
    int soma = A[0]+A[1]+A[5];
    A[4] = 100;
    printf("Soma A[0]+A[1]+A[5] = %d\n", soma);
    printf("Vetor A:\n"); for(int i=0;i<6;i++) printf("%d\n", A[i]);
    return 0;
}
