/*
 Questão 19
 Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar.
 Os conjuntos têm no máximo 20 elementos. Aqui: pede-se n, então vetores com n elementos.
*/
#include <stdio.h>

int main(){
    int n, i;
    double A[20], B[20], prod = 0;
    printf("Quantos elementos (max 20)? ");
    if(scanf("%d", &n)!=1) return 0;
    if(n<1) return 0;
    if(n>20) n=20;
    for(i=0;i<n;i++){
        printf("A[%d]: ", i);
        if(scanf("%lf",&A[i])!=1) return 0;
    }
    for(i=0;i<n;i++){
        printf("B[%d]: ", i);
        if(scanf("%lf",&B[i])!=1) return 0;
    }
    for(i=0;i<n;i++) prod += A[i]*B[i];
    printf("Vetor A:\n");
    for(i=0;i<n;i++) printf("%.2f ", A[i]);
    printf("\nVetor B:\n");
    for(i=0;i<n;i++) printf("%.2f ", B[i]);
    printf("\nProduto escalar: %.2f\n", prod);
    return 0;
}
