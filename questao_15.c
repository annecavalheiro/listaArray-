/*
 Questão 15
 Leia um vetor com 20 inteiros. Escreva os elementos eliminando repetidos.
*/
#include <stdio.h>

int ja_existe(int *a, int len, int val){
    int i;
    for(i=0;i<len;i++) if(a[i]==val) return 1;
    return 0;
}

int main(){
    int v[20], i, out[20], outlen=0;
    for(i=0;i<20;i++){
        printf("v[%d]: ", i);
        if(scanf("%d",&v[i])!=1) return 0;
        if(!ja_existe(out,outlen,v[i])){
            out[outlen++]=v[i];
        }
    }
    printf("Vetor sem repetidos (%d elementos):\n", outlen);
    for(i=0;i<outlen;i++) printf("%d ", out[i]);
    printf("\n");
    return 0;
}
