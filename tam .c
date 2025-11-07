#include <stdio.h>

int main() {
    int lin, col, i, j;

    printf("Digite o numero de linhas: ");
    scanf("%d", &lin);
    printf("Digite o numero de colunas: ");
    scanf("%d", &col);

    int mat[lin][col];

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("Digite o valor para [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
