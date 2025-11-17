/*
 Questão 36
 Recebe nomes de 8 clientes e quantidade de DVDs locados em 2009; calcula locacoes gratis (1 grátis a cada 10).
*/
#include <stdio.h>
#include <string.h>

int main(){
    char nomes[8][101];
    int loc[8], i;
    for(i=0;i<8;i++){
        printf("Nome do cliente %d: ", i+1); scanf("%100s", nomes[i]);
        printf("Locações em 2009: "); scanf("%d", &loc[i]);
    }
    printf("Relatorio:\n");
    for(i=0;i<8;i++) printf("%s -> gratis: %d\n", nomes[i], loc[i]/10);
    return 0;
}
