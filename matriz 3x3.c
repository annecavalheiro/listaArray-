#include<stdio.h>
// Função que retorna o maior valor da matriz 3x3
int maior(int m[3][3]) {
    int max = m[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (m[i][j] > max) max = m[i][j];
    return max;
}

int main() {
    int m[3][3];
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);

    printf("O maior número da matriz é: %d\n", maior(m));
    return 0;
}