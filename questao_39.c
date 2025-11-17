/*
 Questão 39
 Preencher vetor 100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7.
*/
#include <stdio.h>

int ends_with_7(int x){ return (x%10)==7; }

int main(){
    int v[100], cnt=0, x=1;
    while(cnt<100){
        if(x%7!=0 || ends_with_7(x)){ v[cnt++]=x; }
        x++;
    }
    for(int i=0;i<100;i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
