#include <stdio.h>  
// Biblioteca padrão para usar printf() e scanf()

// Função recursiva que calcula o fatorial de um número
// int fatorial(int n) → retorna um inteiro (o resultado do fatorial)
int fatorial(int n) {  
    if (n == 0 || n == 1)  // Caso base: fatorial de 0 ou 1 é 1
        return 1;          // Retorna 1 e para a recursão
    return n * fatorial(n - 1);  
    // Chamada recursiva: multiplica n pelo fatorial de n-1
    // Exemplo: fatorial(5) = 5 * fatorial(4) = 5*4*3*2*1
}

int main() {  
    int N;  // Variável para armazenar o número digitado pelo usuário
    printf("Digite um número: ");  
    // Pede para o usuário digitar o número
    scanf("%d", &N);  
    // Lê o número digitado e armazena na variável N
    printf("Fatorial de %d é %d\n", N, fatorial(N));  
    // Chama a função fatorial(N) e imprime o resultado
    return 0;  
    // Indica que o programa terminou corretamente
}
