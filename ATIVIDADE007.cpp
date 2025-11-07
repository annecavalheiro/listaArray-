#include <stdio.h>
#include <string.h>

int main() {
    char nomes[3][100];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome completo %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    printf("Primeiros nomes:\n");
    for (int i = 0; i < 3; i++) {
        char *primeiro = strtok(nomes[i], " "); // separa pelo espaço
        printf("%s\n", primeiro);
    }

    return 0;
}
