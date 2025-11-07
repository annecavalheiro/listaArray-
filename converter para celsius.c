#include <stdio.h>  // Biblioteca para printf e scanf

// Função que converte Fahrenheit para Celsius
float converterParaCelsius(float f) {
    return 5.0 / 9.0 * (f - 32);
    // Fórmula: Celsius = 5/9 * (Fahrenheit - 32)
}

int main() {
    float f, c;  // Declara duas variáveis: f (Fahrenheit) e c (Celsius)

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);  // Lê o valor digitado pelo usuário

    c = converterParaCelsius(f);  // Chama a função e guarda o resultado em 'c'

    printf("A temperatura em Celsius é: %.2f\n", c);
    // Mostra o resultado com duas casas decimais

    return 0;  // Fim do programa
}
