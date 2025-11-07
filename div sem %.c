#include <stdio.h>

int divisivelSemMod(int a, int b) {
    if (b == 0)
        return 0; // evita divisão por zero

    int resto = a - (a / b) * b; // calcula o resto sem usar %
    return (resto == 0); // retorna 1 se for divisível, 0 caso contrário
}

int main() {
    int x, y;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    if (divisivelSemMod(x, y))
        printf("%d é divisível por %d\n", x, y);
    else
        printf("%d não é divisível por %d\n", x, y);

    return 0;
}
,
