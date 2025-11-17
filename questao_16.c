/*
 Questão 16
 Ler 10 números DIFERENTES; se repetir pedir outro número.
*/
#include <stdio.h>

int ja_existe(int *a, int len, int val){
    int i;
    for(i=0;i<len;i++) if(a[i]==val) return 1;
    return 0;
}

int main(){
    int v[10], i=0, x;
    while(i<10){
        printf("Digite um número diferente (%d/10): ", i+1);
        if(scanf("%d",&x)!=1) return 0;
        if(ja_existe(v,i,x)){
            printf("Número já digitado. Tente outro.\n");
        } else {
            v[i++] = x;
        }
    }
    printf("Vetor final:\n");
    for(i=0;i<10;i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
