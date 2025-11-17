/*
 Questão 14
 Leia um vetor com 10 números de ponto flutuante, ordene e escreva o vetor ordenado.
*/
#include <stdio.h>

int main(){
    double v[10];
    int i,j;
    for(i=0;i<10;i++){
        printf("v[%d]: ", i);
        if(scanf("%lf",&v[i])!=1) return 0;
    }
    // bubble sort
    for(i=0;i<9;i++){
        for(j=0;j<9-i;j++){
            if(v[j] > v[j+1]){
                double t = v[j]; v[j]=v[j+1]; v[j+1]=t;
            }
        }
    }
    printf("Vetor ordenado:\n");
    for(i=0;i<10;i++) printf("%.2f ", v[i]);
    printf("\n");
    return 0;
}
