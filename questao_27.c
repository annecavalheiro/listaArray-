/*
 Questão 27
 Leia vetor de 8 posições e depois leia X e Y. Escreva soma dos valores nas posições X e Y.
*/
#include <stdio.h>

int main(){
    int v[8], i, X, Y;
    for(i=0;i<8;i++){ printf("v[%d]: ", i); scanf("%d", &v[i]); }
    printf("X Y (posicoes 0..7): "); scanf("%d %d", &X, &Y);
    if(X<0||X>7||Y<0||Y>7){ printf("Posição inválida\n"); return 0; }
    printf("Soma: %d\n", v[X]+v[Y]);
    return 0;
}
