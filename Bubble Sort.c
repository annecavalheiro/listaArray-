#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

void bolha(int trabalho[], const int tam, int (*compare)(int a, int b));
int ascendente(int a, int b);
int descendente(int a, int b);

int main() {
    int a[TAMANHO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int cont;
    int ordem;

    printf("Digite 1 para colocar em ordem ascendente: ");
    printf("\nDigite 2 para colocar em ordem descendente: ");
    scanf("%d", &ordem);

    if (ordem == 1) {
        bolha(a, TAMANHO, ascendente);
        printf("\nItens de dados na ordem ascendente:\n");
    } else {
        bolha(a, TAMANHO, descendente);
        printf("\nItens de dados na ordem descendente:\n");
    }

    for (cont = 0; cont < TAMANHO; cont++)
        printf("%5d", a[cont]);

    printf("\n");
    return 0;
}

void bolha(int trabalho[], const int tam, int (*compare)(int a, int b)) {
    int passada, cont;
    void inverte(int *elemento1ptr, int *elemento2ptr);

    for (passada = 1; passada < tam; passada++) {
        for (cont = 0; cont < tam - passada; cont++) {
            if ((*compare)(trabalho[cont], trabalho[cont + 1])) {
                inverte(&trabalho[cont], &trabalho[cont + 1]);
            }
        }
    }
}

void inverte(int *elemento1ptr, int *elemento2ptr) {
    int temp;
    temp = *elemento1ptr;
    *elemento1ptr = *elemento2ptr;
    *elemento2ptr = temp;
}

int ascendente(int a, int b) {
    return (a > b);
}

int descendente(int a, int b) {
    return (a < b);
}