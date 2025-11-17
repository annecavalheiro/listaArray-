/*
 Questão 22
 Ler n, criar e ler vetor inteiro de n posições; contar múltiplos de x.
*/
#include <stdio.h>

int main(){
    int n,x,i,c=0;
    printf("n: "); if(scanf("%d",&n)!=1) return 0;
    if(n<=0) return 0;
    int *v = malloc(sizeof(int)*n);
    for(i=0;i<n;i++){ printf("v[%d]: ",i); scanf("%d",&v[i]); }
    printf("x (para testar multiplos): "); scanf("%d",&x);
    for(i=0;i<n;i++) if(v[i]%x==0) c++;
    printf("Foram encontrados %d multiplos de %d\n", c, x);
    free(v);
    return 0;
}
