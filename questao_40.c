/*
 Questão 40
 Calcular desvio padrão de vetor v com n números (população? formula dada uses sample? We'll implement population std dev with denominator n-1?)
 Usaremos formula: sqrt( sum((vi - m)^2) / (n-1) ) if n>1 else 0
*/
#include <stdio.h>
#include <math.h>

int main(){
    int n,i;
    printf("n: "); if(scanf("%d", &n)!=1) return 0;
    if(n<=0) return 0;
    double v[n], soma=0, m, s=0;
    for(i=0;i<n;i++){ printf("v[%d]: ", i); scanf("%lf", &v[i]); soma += v[i]; }
    m = soma / n;
    for(i=0;i<n;i++) s += (v[i]-m)*(v[i]-m);
    double desvio = (n>1)? sqrt(s/(n-1)) : 0.0;
    printf("Desvio padrão (amostral): %.6f\n", desvio);
    return 0;
}
