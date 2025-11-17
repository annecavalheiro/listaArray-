/*
 Questão 17
 Peça ao usuário 10 valores e ordene por ordem crescente guardando-os num vetor.
 Ordene o valor assim que ele for digitado (inserção ordenada).
*/
#include <stdio.h>

int main(){
    int v[10], i, j, n=0, x;
    for(i=0;i<10;i++){
        printf("Digite o valor %d: ", i+1);
        if(scanf("%d",&x)!=1) return 0;
        // inserir ordenado
        j = n-1;
        while(j>=0 && v[j] > x){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = x;
        n++;
    }
    printf("Valores em ordem crescente:\n");
    for(i=0;i<10;i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
