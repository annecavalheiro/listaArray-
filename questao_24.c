/*
 Questão 24
 Ler dois vetores (n,m) e construir vetor interseção (sem repetidos).
*/
#include <stdio.h>
#include <stdlib.h>

int contains(int *a,int len,int x){ for(int i=0;i<len;i++) if(a[i]==x) return 1; return 0; }

int main(){
    int n,m,i,j;
    printf("n m: "); if(scanf("%d %d",&n,&m)!=2) return 0;
    int *A = malloc(sizeof(int)*n); int *B = malloc(sizeof(int)*m);
    for(i=0;i<n;i++){ printf("A[%d]: ",i); scanf("%d",&A[i]); }
    for(i=0;i<m;i++){ printf("B[%d]: ",i); scanf("%d",&B[i]); }
    int *I = malloc(sizeof(int)*(n<m?n:m)); int ilen=0;
    for(i=0;i<n;i++) if(contains(B,m,A[i]) && !contains(I,ilen,A[i])) I[ilen++]=A[i];
    printf("A: "); for(i=0;i<n;i++) printf("%d ",A[i]); printf("\n");
    printf("B: "); for(i=0;i<m;i++) printf("%d ",B[i]); printf("\n");
    printf("Interseção: "); for(i=0;i<ilen;i++) printf("%d ", I[i]); printf("\n");
    free(A); free(B); free(I);
    return 0;
}
