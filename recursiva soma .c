#include <stdio.h>  
// Biblioteca padrão para usar printf() e scanf()

// Função recursiva que calcula a soma de 1 até N
int somaRec(int n) {
    if (n <= 0)  // Caso base: se n for 0 ou negativo, a soma é 0
        return 0;  
    return n + somaRec(n - 1);  
    // Chamada recursiva: soma o número atual com a soma de 1 até n-1
}

int main() {
    int N;
    printf("Digite um número: ");  
    scanf("%d", &N);  // Lê o número digitado pelo usuário
    int soma = somaRec(N);  // Chama a função recursiva e guarda o resultado
    printf("Soma de 1 até %d é %d\n", N, soma);  // Mostra o resultado
    return 0;  // Indica que o programa terminou corretamente
}
