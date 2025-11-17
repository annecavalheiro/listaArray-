/*
 Questão 25
 Ler dois vetores n e m e criar vetor união (elementos de A e depois os de B que não estão em A).
*/
#include <stdio.h>
#include <stdlib.h>

int contains(int *a,int len,int x){ for(int i=0;i<len;i++) if(a[i]==x) return 1; return 0; }

int main(){
    int n,m,i;
    printf("n m: "); if(scanf("%d %d",&n,&m)!=2) return 0;
    int *A = malloc(sizeof(int)*n); int *B = malloc(sizeof(int)*m);
    for(i=0;i<n;i++){ printf("A[%d]: ",i); scanf("%d",&A[i]); }
    for(i=0;i<m;i++){ printf("B[%d]: ",i); scanf("%d",&B[i]); }
    int *U = malloc(sizeof(int)*(n+m)); int ulen=0;
    for(i=0;i<n;i++) U[ulen++]=A[i];
    for(i=0;i<m;i++) if(!contains(A,n,B[i])) U[ulen++]=B[i];
    printf("Uniao: "); for(i=0;i<ulen;i++) printf("%d ", U[i]); printf("\n");
    free(A); free(B); free(U);
    return 0;
}
