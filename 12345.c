#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5
// protocolo de função
void inicializa_arr(int arr[][COL], int);
void imprime_arr(int arr[][COL], int);

int main() {
    int tabela[LIN][COL];

    inicializa_arr(tabela, LIN);

    printf("\n \t \t Tabela de multiplicação \n\n");

    imprime_arr(tabela, LIN);

    return 0;
}

void inicializa_arr(int arr[][COL], int nLIN) {
    int x, y;

    for (x = 0; x < nLIN; x++) {
        for (y = 0; y < COL; y++) {
            arr[x][y] = x * y;
        }
    }
}

void imprime_arr(int arr[][COL], int nLIN) {
    int x, y;

    // cabeçalho
    printf("%4s", "");
    for (y = 0; y < COL; y++)
        printf("%3d", y);
    printf("\n");

    // linha separadora
    printf("    ");
    for (y = 0; y < COL; y++)
        printf("---");
    printf("\n");

    // linhas da tabela
    for (x = 0; x < nLIN; x++) {
        printf("%2d |", x);
        for (y = 0; y < COL; y++)
            printf("%3d", arr[x][y]);
        printf("\n");
    }
}
