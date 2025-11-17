/*
 Questão 21
 Ler um conjunto de números reais, armazenar em vetor e calcular o quadrado das componentes
 Armazenar o resultado em outro vetor (max 20 elementos). Imprimir todos os conjuntos.
*/
#include <stdio.h>

int main(){
    int n,i;
    double a[20], b[20];
    printf("Quantos elementos (max 20)? ");
    if(scanf("%d",&n)!=1) return 0;
    if(n<0) n=0; if(n>20) n=20;
    for(i=0;i<n;i++){ printf("a[%d]: ",i); scanf("%lf",&a[i]); b[i]=a[i]*a[i]; }
    printf("Original:\n"); for(i=0;i<n;i++) printf("%.2f ", a[i]); printf("\n");
    printf("Quadrados:\n"); for(i=0;i<n;i++) printf("%.2f ", b[i]); printf("\n");
    return 0;
}
