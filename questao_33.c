/*
 Questão 33
 Recebe 6 inteiros e mostra: pares, soma pares, impares, qtd impares.
*/
#include <stdio.h>

int main(){
    int v[6], i, soma_pares=0, qtd_impares=0;
    printf("Digite 6 inteiros:\n"); for(i=0;i<6;i++) scanf("%d", &v[i]);
    printf("Pares: "); for(i=0;i<6;i++) if(v[i]%2==0){ printf("%d ", v[i]); soma_pares+=v[i]; }
    printf("\nSoma pares: %d\n", soma_pares);
    printf("Impares: "); for(i=0;i<6;i++) if(v[i]%2!=0){ printf("%d ", v[i]); qtd_impares++; }
    printf("\nQuantidade de impares: %d\n", qtd_impares);
    return 0;
}
