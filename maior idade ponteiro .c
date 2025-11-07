#include <stdio.h>

typedef struct {
    char n[20];
    int i;
} Pessoa;

int main() {
    Pessoa p[3];
    int i, m;

    // Leitura das pessoas
    for(i = 0; i < 3; i++) {
        printf("Entre com a idade: ");
        scanf("%19s %d", p[i].n, &p[i].i);
    }

    // Maior idade
    m = p[0].i;
    for(i = 1; i < 3; i++)
        if(p[i].i > m)
            m = p[i].i;

    printf("Maior idade: %d\n", m);
    return 0;
}
