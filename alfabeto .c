#include <stdio.h>

int main() {
    char alfabeto[27]; // 26 letras + '\0'
    
    for (int i = 0; i < 26; i++) {
        alfabeto[i] = 'A' + i; // gera A, B, C, ...
    }

    alfabeto[26] = '\0';
    printf("Alfabeto maiúsculo: %s\n", alfabeto);

    return 0;
}
