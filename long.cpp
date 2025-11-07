#include <stdio.h>

void lerVetor(int v[], int n, int i){
    if(i == n) return;
    scanf("%d", &v[i]);
    lerVetor(v, n, i + 1);
}

void mostrarVetor(int v[], int n, int i){
    if(i == n) return;
    printf("%d ", v[i]);
    mostrarVetor(v, n, i + 1);
}

int main(){
    int v[5];
    printf("Digite 5 números:\n");
    lerVetor(v, 5, 0);         // preenche o vetor
    printf("Vetor digitado:\n");
    mostrarVetor(v, 5, 0);     // mostra o vetor
}


