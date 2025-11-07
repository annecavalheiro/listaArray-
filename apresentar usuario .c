#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    char telefone[20];
} Usuario;

int main() {
    Usuario u1;

    // Acessando os campos
    strcpy(u1.nome, "Joao");
    u1.idade = 25;
    strcpy(u1.telefone, "9999-8888");

    printf("Nome: %s\nIdade: %d\nTelefone: %s\n", u1.nome, u1.idade, u1.telefone);

    return 0;
}
