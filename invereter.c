#include <stdio.h>  
// Biblioteca padrão para usar printf() e scanf()

// Função recursiva para inverter os dígitos de um número
void inverter(int n) {
    if (n == 0)  // Caso base: se o número for 0, para a recursão
        return;  // Sai da função
    printf("%d", n % 10);  // Imprime o último dígito do número
    inverter(n / 10);       // Chamada recursiva: passa o número sem o último dígito
}

int main() {
    int N;
    printf("Digite um número: ");  
    scanf("%d", &N);  // Lê o número digitado pelo usuário
    printf("Número invertido: ");
    inverter(N);       // Chama a função para mostrar o número invertido
    printf("\n");      // Quebra de linha ao final
    return 0;          // Indica que o programa terminou corretamente
}
