/*
 Questão 10
 Ler sequência de números reais e determinar o maior. A sequência termina quando for digitado 0.
*/
#include <stdio.h>

int main(){
    double x;
    double maior = -1.0/0.0; // -inf
    int teve = 0;
    printf("Digite números reais (0 para terminar):\n");
    while(1){
        if(scanf("%lf",&x)!=1) return 0;
        if(x==0.0) break;
        if(!teve || x > maior) maior = x;
        teve = 1;
    }
    if(teve) printf("Maior elemento da sequência: %.6g\n", maior);
    else printf("Nenhum número diferente de zero foi lido.\n");
    return 0;
}
