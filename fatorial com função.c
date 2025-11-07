#include <stdio.h>

int fatorial(int n){
    if (n < 0) return -1;           // não existe fatorial de número negativo
    if (n == 0 || n == 1) return 1; // caso base
    return n * fatorial(n - 1);     // chamada recursiva
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    int resultado = fatorial(n);
    
    if (resultado == -1)
        printf("Nao possivel calcular o fatorial de numero negativo.\n");
    else
        printf("Fatorial de %d e %d\n", n, resultado);
    
    return 0;
}
