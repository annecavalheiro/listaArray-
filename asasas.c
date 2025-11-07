#include <stdio.h>
#include <stdlib.h>

#define Altura 5
#define Largura 5

void seleciona_element(int[][Largura], int);
void pontos(int[][Largura], int);
void imprime_matriz(int[][Largura], int);
void marca_triang(int[][Largura], int);
void flip(int[][Largura], int);
void espera_entrada(void);

void pontos(int matriz[][Largura], int nLin) {
    int x, y;
    for (x = 0; x < nLin; x++) {
        for (y = 0; y < Largura; y++) {
            matriz[x][y] = '_';
        }
    }
}

void imprime_matriz(int matriz[][Largura], int nLin) {
    int x, y;
    printf("\n");
    for (x = 0; x < nLin; x++) {
        for (y = 0; y < Largura; y++) {
            printf(" %c ", matriz[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

void seleciona_element(int matriz[][Largura], int nLin) {
    int x, y;

    printf("\nEntra com as coordenadas na forma x,y (exemplo: 2,4).\n");
    printf("Use numeros negativos para terminar.\n");

    while (1) {
        printf("Coordenadas: ");
        if (scanf("%d,%d", &x, &y) != 2) {
            printf("Entrada inválida!\n");
            break;
        }

        if (x >= 0 && y >= 0 && x < nLin && y < Largura) {
            matriz[x][y] = 'X';
            imprime_matriz(matriz, nLin);
        } else {
            break;
        }
    }
}

void marca_triang(int matriz[][Largura], int nLin) {
    int x, y;

    printf("\nTriângulo:\n");
    pontos(matriz, nLin);

    // preenchendo linha por linha até formar o triângulo
    for (x = 0; x < nLin; x++) {
        for (y = 0; y <= x && y < Largura; y++) {
            matriz[x][y] = '*';
        }
    }

    imprime_matriz(matriz, nLin);
}

void flip(int matriz[][Largura], int nLin) {
    int x, y;
    for (x = 0; x < nLin; x++) {
        for (y = 0; y < Largura; y++) {
            if (matriz[x][y] == '_')
                matriz[x][y] = 'O';
            else if (matriz[x][y] == 'O')
                matriz[x][y] = '_';
        }
    }
    imprime_matriz(matriz, nLin);
}

void espera_entrada(void) {
    printf("\nPressione ENTER para continuar...");
    getchar(); getchar();
}

int main() {
    int matriz[Altura][Largura];

    pontos(matriz, Altura);
    imprime_matriz(matriz, Altura);

    seleciona_element(matriz, Altura);

    marca_triang(matriz, Altura);

    flip(matriz, Altura);

    return 0;
}
