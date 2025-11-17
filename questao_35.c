/*
 Questão 35
 Preencher vetor com 10 reais; calcular qtd de negativos e soma dos positivos.
*/
#include <stdio.h>

int main(){
    double v[10]; int i, qtd_neg=0; double soma_pos=0;
    for(i=0;i<10;i++){ printf("v[%d]: ", i); scanf("%lf", &v[i]); if(v[i]<0) qtd_neg++; else soma_pos += v[i]; }
    printf("Negativos: %d\nSoma positivos: %.2f\n", qtd_neg, soma_pos);
    return 0;
}
