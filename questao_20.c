/*
 Questão 20
 Ler sequência de inteiros (positivos e negativos) até zero, armazenar em vetor.
 Escrever número de elementos positivos e negativos.
*/
#include <stdio.h>

int main(){
    int v[1000], n=0, x, positivos=0, negativos=0, i;
    printf("Digite inteiros (0 termina):\n");
    while(1){
        if(scanf("%d",&x)!=1) return 0;
        if(x==0) break;
        if(n<1000) v[n++]=x;
        if(x>0) positivos++;
        else if(x<0) negativos++;
    }
    printf("Foram lidos %d elementos. Positivos: %d. Negativos: %d.\n", n, positivos, negativos);
    return 0;
}
