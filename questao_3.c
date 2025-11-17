/*
 Questão 3
 Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/
#include <stdio.h>

int main(){
    int v[10], i, pares=0;
    for(i=0;i<10;i++){
        printf("Digite v[%d]: ", i);
        if(scanf("%d",&v[i])!=1) return 0;
        if(v[i]%2==0) pares++;
    }
    printf("Quantidade de valores pares: %d\n", pares);
    return 0;
}
