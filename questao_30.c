/*
 Questão 30 - igual à 8/57 repetida: verifique valores iguais em vetor de 10 posicoes.
*/
#include <stdio.h>

int main(){
    int v[10], i,j, achou=0;
    for(i=0;i<10;i++){ printf("v[%d]: ", i); scanf("%d", &v[i]); }
    for(i=0;i<10;i++) for(j=i+1;j<10;j++) if(v[i]==v[j]){ printf("%d repetido em %d e %d\n", v[i], i, j); achou=1; }
    if(!achou) printf("Nenhum repetido\n");
    return 0;
}
