#include <stdio.h>
#include <string.h>

int main() {
    char nome[200];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remove o \n

    printf("Número de caracteres: %lu\n", strlen(nome));

    return 0;
}
