/*
 Questão 32
 Preencher um vetor com 10 e outro com 5; mostrar números do primeiro com seus divisores no segundo e posições.
*/
#include <stdio.h>

int main(){
    int A[10], D[5], i,j;
    for(i=0;i<10;i++){ printf("A[%d]: ", i); scanf("%d", &A[i]); }
    for(i=0;i<5;i++){ printf("D[%d]: ", i); scanf("%d", &D[i]); }
    for(i=0;i<10;i++){
        printf("%d: divisores encontrados em posicoes ", A[i]);
        for(j=0;j<5;j++) if(A[i] % D[j] == 0) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
