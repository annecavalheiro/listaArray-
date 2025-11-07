#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char telefone[20];
} Usuario;

int main() {
    int capacidade = 10;            // quantidade máxima de usuários
    int total = 0;                  // quantidade cadastrada
    Usuario *usuarios = malloc(sizeof(Usuario) * capacidade); // alocação dinâmica

    int opcao;
    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar usuário\n");
        printf("2 - Listar usuários\n");
        printf("3 - Remover usuário\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        if (opcao == 1) {
            if (total >= capacidade) {
                printf("Capacidade cheia! Não é possível cadastrar mais.\n");
                continue;
            }

            Usuario *u = &usuarios[total]; // ponteiro para o próximo usuário

            printf("Nome: ");
            fgets(u->nome, sizeof(u->nome), stdin);
            u->nome[strcspn(u->nome, "\n")] = '\0';

            printf("Idade: ");
            scanf("%d", &u->idade);
            getchar();

            printf("Telefone: ");
            fgets(u->telefone, sizeof(u->telefone), stdin);
            u->telefone[strcspn(u->telefone, "\n")] = '\0';

            total++;
            printf("\nUsuário cadastrado com sucesso!\n");
        }

        else if (opcao == 2) {
            if (total == 0) {
                printf("Nenhum usuário cadastrado.\n");
            } else {
                printf("\n--- Lista de Usuários ---\n");
                for (int i = 0; i < total; i++) {
                    printf("%d) Nome: %s | Idade: %d | Telefone: %s\n", i + 1, usuarios[i].nome, usuarios[i].idade, usuarios[i].telefone);
                }
            }
        }

        else if (opcao == 3) {
            if (total == 0) {
                printf("Nenhum usuário para remover.\n");
                continue;
            }

            int remover;
            printf("Digite o número do usuário que deseja remover: ");
            scanf("%d", &remover);
            getchar();

            if (remover < 1 || remover > total) {
                printf("Número inválido!\n");
            } else {
                // mover todos os usuários à frente uma posição para "apagar" o selecionado
                for (int i = remover - 1; i < total - 1; i++) {
                    usuarios[i] = usuarios[i + 1];
                }
                total--;
                printf("Usuário removido com sucesso!\n");
            }
        }

    } while (opcao != 0);

    free(usuarios); // libera memória alocada
    printf("Saindo...\n");
    return 0;
}
