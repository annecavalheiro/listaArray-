/*
 Questão 1
 Leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, 
 o maior elemento e a posição que ele se encontra.
 Comentários:
 - Declaração: int v[10], i, maior, pos;
 - Entrada: leitura de 10 inteiros
 - Processamento: localizar maior e sua posição
 - Saída: imprime vetor, maior e posição (índice começando em 0)
*/
#include <stdio.h>

int main() {
    int v[10], i, maior, pos;
    // Entrada
    for(i=0;i<10;i++){
        printf("Digite o elemento %d: ", i);
        if(scanf("%d", &v[i])!=1) return 0;
    }
    // Processamento
    maior = v[0];
    pos = 0;
    for(i=1;i<10;i++){
        if(v[i] > maior){
            maior = v[i];
            pos = i;
        }
    }
    // Saída
    printf("\nVetor: ");
    for(i=0;i<10;i++) printf("%d ", v[i]);
    printf("\nMaior elemento: %d\nPosição (índice): %d\n", maior, pos);
    return 0;
}
