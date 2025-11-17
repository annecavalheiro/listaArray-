/*
 Questão 28
 Recebe vetor x com 10 posições e imprime maior e menor elemento.
*/
#include <stdio.h>

int main(){
    int v[10], i, mai, men;
    for(i=0;i<10;i++){ printf("v[%d]: ", i); scanf("%d", &v[i]); }
    mai = men = v[0];
    for(i=1;i<10;i++){ if(v[i]>mai) mai=v[i]; if(v[i]<men) men=v[i]; }
    printf("Maior: %d\nMenor: %d\n", mai, men);
    return 0;
}
