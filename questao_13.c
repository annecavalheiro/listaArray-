/*
 Questão 13
 Leia X e Y (5 elementos). Calcule:
 - Soma entre X e Y (posicao a posicao)
 - Produto entre X e Y
 - Diferença X - Y (elementos de X que não estão em Y)
 - Interseção
 - União (X mais elementos de Y que não estão em X)
*/
#include <stdio.h>

int contem(int *a, int len, int val){
    int i;
    for(i=0;i<len;i++) if(a[i]==val) return 1;
    return 0;
}

int main(){
    int X[5], Y[5], i;
    int soma[5], prod[5];
    printf("Digite 5 elementos para X:\n");
    for(i=0;i<5;i++) scanf("%d",&X[i]);
    printf("Digite 5 elementos para Y:\n");
    for(i=0;i<5;i++) scanf("%d",&Y[i]);
    for(i=0;i<5;i++){
        soma[i] = X[i] + Y[i];
        prod[i] = X[i] * Y[i];
    }
    printf("Soma (posicao a posicao):\n");
    for(i=0;i<5;i++) printf("%d ", soma[i]);
    printf("\nProduto (posicao a posicao):\n");
    for(i=0;i<5;i++) printf("%d ", prod[i]);
    // Diferença X - Y
    printf("\nDiferenca (X \ Y):\n");
    for(i=0;i<5;i++){
        if(!contem(Y,5,X[i])) printf("%d ", X[i]);
    }
    // Intersecao
    printf("\nIntersecao:\n");
    for(i=0;i<5;i++){
        if(contem(Y,5,X[i])) printf("%d ", X[i]);
    }
    // Uniao
    printf("\nUniao:\n");
    int U[10], ulen=0, j;
    for(i=0;i<5;i++) { U[ulen++]=X[i]; }
    for(i=0;i<5;i++) if(!contem(X,5,Y[i])) U[ulen++]=Y[i];
    for(i=0;i<ulen;i++) printf("%d ", U[i]);
    printf("\n");
    return 0;
}
