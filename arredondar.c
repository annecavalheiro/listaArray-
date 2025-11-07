#include <stdio.h>
#include <math.h>

int arredonda(double n) {
    return (int)round(n);
}

int main() {
    double num;

    printf("Digite um numero real: ");
    scanf("%lf", &num);

    printf("Arredondado = %d\n", arredonda(num));

    return 0;
}
