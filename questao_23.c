/*
 Questão 23
 Ler dois números a e b (<10000). Crie vetores com os dígitos (LSB em posição 0).
 Some usando vetores (simular soma manual).
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void to_digits(int x, int *d, int *len){
    *len=0;
    if(x==0){ d[(*len)++]=0; return; }
    while(x>0){ d[(*len)++]= x%10; x/=10; }
}

int main(){
    int a,b,i,la,lb,lc;
    printf("a b: ");
    if(scanf("%d %d",&a,&b)!=2) return 0;
    int da[10]={0}, db[10]={0}, dc[11]={0};
    to_digits(a,da,&la); to_digits(b,db,&lb);
    int carry=0;
    lc = (la>lb?la:lb);
    for(i=0;i<lc;i++){
        int sa = (i<la?da[i]:0) + (i<lb?db[i]:0) + carry;
        dc[i] = sa % 10;
        carry = sa / 10;
    }
    if(carry) dc[lc++] = carry;
    printf("Soma em vetor (LSB pos0): ");
    for(i=0;i<lc;i++) printf("%d", dc[i]);
    printf("\nSoma em ordem normal: ");
    for(i=lc-1;i>=0;i--) printf("%d", dc[i]);
    printf("\n");
    return 0;
}
