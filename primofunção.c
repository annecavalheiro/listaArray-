#include <stdio.h>

// Função que verifica se um número é primo
int ehPrimo(int n) {
    if (n <= 1)  // números menores ou iguais a 1 não são primos
        return 0;

    for (int i = 2; i < n; i++) {  // testa divisores de 2 até n-1
        if (n % i == 0)  // se for divisível, não é primo
            return 0;
    }

    return 1;  // se não encontrou divisor, é primo
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (ehPrimo(num))
        printf("%d é primo.\n", num);
    else
        printf("%d não é primo.\n", num);

    return 0;
}
