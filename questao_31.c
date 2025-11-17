/*
 Questão 31
 Leia vetor de 15 posições e compacte (elimine zeros movendo elementos para trás).
*/
#include <stdio.h>

int main(){
    int v[15], i, j, k=0;
    for(i=0;i<15;i++){ printf("v[%d]: ", i); scanf("%d", &v[i]); }
    for(i=0;i<15;i++) if(v[i]!=0) v[k++]=v[i];
    for(i=k;i<15;i++) v[i]=0;
    printf("Vetor compactado:\n"); for(i=0;i<15;i++) printf("%d ", v[i]); printf("\n");
    return 0;
}
