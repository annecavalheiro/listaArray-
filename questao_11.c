/*
 Questão 11
 Leia 10 números inteiros, armazene em vetor. Escreva os elementos que são primos e suas posições.
*/
#include <stdio.h>
#include <math.h>

int eh_primo(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    int i, lim = (int)sqrt(n);
    for(i=3;i<=lim;i+=2) if(n%i==0) return 0;
    return 1;
}

int main(){
    int v[10], i;
    for(i=0;i<10;i++){
        printf("v[%d]: ", i);
        if(scanf("%d",&v[i])!=1) return 0;
    }
    printf("Primos encontrados:\n");
    for(i=0;i<10;i++){
        if(eh_primo(v[i])) printf("v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
