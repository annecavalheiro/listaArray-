#include <stdio.h>  
// Biblioteca padrão para usar printf() e scanf()

// Função recursiva que retorna o n-ésimo número de Fibonacci
int fib(int n) {
    if (n == 0)  // Caso base: Fibonacci de 0 é 0
        return 0;
    if (n == 1)  // Caso base: Fibonacci de 1 é 1
        return 1;
    return fib(n - 1) + fib(n - 2);  
    // Chamada recursiva: soma os dois números anteriores na sequência
}

int main() {
    int N;
    printf("Digite a posicao N na sequencia de Fibonacci: ");
    scanf("%d", &N);  // Lê o valor de N digitado pelo usuário
    printf("Fibonacci na posicao %d e %d\n", N, fib(N));  
    // Chama a função fib(N) e imprime o resultado
    return 0;  // Indica que o programa terminou corretamente
}
