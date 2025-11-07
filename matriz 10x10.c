#include <stdio.h>

#define TAM 10

void troca(int A[TAM][TAM]) {
    int i, j, temp;

    // Troca linha 2 com linha 8
    for (j = 0; j < TAM; j++) {
        temp = A[1][j];
        A[1][j] = A[7][j];
        A[7][j] = temp;
    }

    // Troca coluna 4 com coluna 10
    for (i = 0; i < TAM; i++) {
        temp = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = temp;
    }

    // Troca diagonal principal com a secundária
    for (i = 0; i < TAM; i++) {
        temp = A[i][i];
        A[i][i] = A[i][TAM - 1 - i];
        A[i][TAM - 1 - i] = temp;
    }

    // Troca linha 5 com coluna 10
    for (i = 0; i < TAM; i++) {
        temp = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = temp;
    }
}

int main() {
    int A[TAM][TAM];
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz 10x10:\n");
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            scanf("%d", &A[i][j]);

    // Chama o procedimento
    troca(A);

    // Exibe a matriz alterada
    printf("\nMatriz após as trocas:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    return 0;
}

