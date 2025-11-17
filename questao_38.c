/*
 Questão 38
 Vetor de tamanho 50 preenchido com (i + 5*i) % i, onde i é posição. 
 Note: expressão ambígua quando i==0; assumiremos posições 1..50 e usaremos fórmula (i+5*i)%i -> 0.
*/
#include <stdio.h>

int main(){
    int v[50];
    for(int i=1;i<=50;i++){
        v[i-1] = (i + 5*i) % (i==0?1:i);
    }
    for(int i=0;i<50;i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
