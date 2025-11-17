/*
 Questão 34 (repetida com 9/34)
 Vetor 5 reais e código 0/1/2.
*/
#include <stdio.h>

int main(){
    double v[5]; int i, c;
    for(i=0;i<5;i++){ printf("v[%d]: ", i); scanf("%lf", &v[i]); }
    printf("Codigo: "); scanf("%d", &c);
    if(c==0) return 0;
    else if(c==1){ for(i=0;i<5;i++) printf("%.2f ", v[i]); printf("\n"); }
    else if(c==2){ for(i=4;i>=0;i--) printf("%.2f ", v[i]); printf("\n"); }
    else printf("Codigo invalido\n");
    return 0;
}
