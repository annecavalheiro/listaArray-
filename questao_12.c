/*
 Questão 12
 Leia 10 inteiros v. Crie v1 com ímpares e v2 com pares. Escreva os elementos utilizados.
*/
#include <stdio.h>

int main(){
    int v[10], v1[10], v2[10];
    int i, c1=0, c2=0;
    for(i=0;i<10;i++){
        printf("v[%d]: ", i);
        if(scanf("%d",&v[i])!=1) return 0;
        if(v[i]%2==0) v2[c2++]=v[i];
        else v1[c1++]=v[i];
    }
    printf("Impares (v1) - %d elementos:\n", c1);
    for(i=0;i<c1;i++) printf("%d ", v1[i]);
    printf("\nPares (v2) - %d elementos:\n", c2);
    for(i=0;i<c2;i++) printf("%d ", v2[i]);
    printf("\n");
    return 0;
}
