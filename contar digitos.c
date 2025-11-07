#include <stdio.h>  
// Biblioteca padrão para usar printf() e scanf()

// Função recursiva que conta quantos dígitos tem um número
int contarDigitos(int n) {
    if (n < 10)  // Caso base: se o número tiver só 1 dígito
        return 1;  
    return 1 + contarDigitos(n / 10);  
    // Divide o número por 10 e soma 1 a cada chamada recursiva
}

int main() {
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N);  // Lê o número digitado pelo usuário
    printf("O numero %d tem %d digitos.\n", N, contarDigitos(N));
    // Chama a função e mostra o resultado
    return 0;  // Indica que o programa terminou corretamente
}
