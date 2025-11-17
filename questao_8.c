/*
 Questão 8
 Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.
*/
#include <stdio.h>

int main(){
    int v[10], i,j, achou=0;
    for(i=0;i<10;i++){
        printf("v[%d]: ", i);
        if(scanf("%d",&v[i])!=1) return 0;
    }
    printf("Valores repetidos (com suas primeiras ocorrencias):\n");
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(v[i]==v[j]){
                printf("%d aparece em posicoes %d e %d\n", v[i], i, j);
                achou = 1;
            }
        }
    }
    if(!achou) printf("Não há valores iguais.\n");
    return 0;
}
