#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MSG 100
#define MAX_USER 20
#define MAX_EXERCICIOS 10

typedef struct {
    char titulo[50];
    char descricao[200];
} Exercicio;

typedef struct {
    char usuario[MAX_USER];
    char mensagem[MAX_MSG];
} Mensagem;

Exercicio exercicios[MAX_EXERCICIOS];
int totalEx = 0;
Mensagem mensagens[50];
int totalMsg = 0;

void menu_principal();
void menu_recursos();
void menu_exercicios();
void menu_forum();
void menu_github();

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    menu_principal();
    return 0;
}

void menu_principal() {
    int op;
    do {
        limparTela();
        printf("====================================\n");
        printf("         A T P  -  SALVANDO SUA ALMA\n");
        printf("====================================\n");
        printf("1 - Vídeos importantes\n");
        printf("2 - Biblioteca de livros/apostilas\n");
        printf("3 - Exercícios\n");
        printf("4 - Fórum\n");
        printf("5 - GitHub dos alunos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        getchar();

        switch (op) {
            case 1: case 2:
                menu_recursos();
                break;
            case 3:
                menu_exercicios();
                break;
            case 4:
                menu_forum();
                break;
            case 5:
                menu_github();
                break;
            case 0:
                printf("Saindo... Boa sorte nos estudos!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
        if (op != 0) {
            printf("\nPressione ENTER para continuar...");
            getchar();
        }
    } while (op != 0);
}

void menu_recursos() {
    limparTela();
    printf("=== Recursos do Curso ===\n\n");
    printf("🔹 Vídeos importantes:\n");
    printf(" - Estrutura de Dados: https://www.youtube.com/watch?v=RBSGKlAvoiM\n");
    printf(" - Programação em C: https://www.youtube.com/watch?v=ZSPZob_1TOk\n");
    printf(" - Banco de Dados: https://www.youtube.com/watch?v=HXV3zeQKqGY\n\n");
    printf("🔹 Biblioteca de livros:\n");
    printf(" - 'Algoritmos – Manzano'\n");
    printf(" - 'Lógica de Programação – Forbellone'\n");
    printf(" - 'Introdução ao Banco de Dados – Korth'\n");
}

void menu_exercicios() {
    int op;
    do {
        limparTela();
        printf("=== Área de Exercícios ===\n");
        printf("1 - Cadastrar exercício\n");
        printf("2 - Listar exercícios\n");
        printf("0 - Voltar\n");
        printf("Escolha: ");
        scanf("%d", &op);
        getchar();

        if (op == 1) {
            if (totalEx < MAX_EXERCICIOS) {
                printf("Título: ");
                fgets(exercicios[totalEx].titulo, 50, stdin);
                exercicios[totalEx].titulo[strcspn(exercicios[totalEx].titulo, "\n")] = 0;

                printf("Descrição: ");
                fgets(exercicios[totalEx].descricao, 200, stdin);
                exercicios[totalEx].descricao[strcspn(exercicios[totalEx].descricao, "\n")] = 0;

                totalEx++;
                printf("Exercício cadastrado com sucesso!\n");
            } else {
                printf("Limite de exercícios atingido!\n");
            }
        } else if (op == 2) {
            printf("\n--- Lista de Exercícios ---\n");
            for (int i = 0; i < totalEx; i++) {
                printf("%d. %s - %s\n", i+1, exercicios[i].titulo, exercicios[i].descricao);
            }
            if (totalEx == 0) printf("Nenhum exercício cadastrado.\n");
        }
        if (op != 0) {
            printf("\nPressione ENTER para continuar...");
            getchar();
        }
    } while (op != 0);
}

void menu_forum() {
    int op;
    do {
        limparTela();
        printf("=== Fórum ATP ===\n");
        printf("1 - Enviar mensagem\n");
        printf("2 - Ver mensagens\n");
        printf("0 - Voltar\n");
        printf("Escolha: ");
        scanf("%d", &op);
        getchar();

        if (op == 1) {
            if (totalMsg < 50) {
                printf("Usuário: ");
                fgets(mensagens[totalMsg].usuario, MAX_USER, stdin);
                mensagens[totalMsg].usuario[strcspn(mensagens[totalMsg].usuario, "\n")] = 0;

                printf("Mensagem: ");
                fgets(mensagens[totalMsg].mensagem, MAX_MSG, stdin);
                mensagens[totalMsg].mensagem[strcspn(mensagens[totalMsg].mensagem, "\n")] = 0;

                totalMsg++;
                printf("Mensagem enviada!\n");
            } else {
                printf("Limite de mensagens atingido!\n");
            }
        } else if (op == 2) {
            printf("\n--- Mensagens ---\n");
            for (int i = 0; i < totalMsg; i++) {
                printf("[%s]: %s\n", mensagens[i].usuario, mensagens[i].mensagem);
            }
            if (totalMsg == 0) printf("Nenhuma mensagem no fórum ainda.\n");
        }
        if (op != 0) {
            printf("\nPressione ENTER para continuar...");
            getchar();
        }
    } while (op != 0);
}

void menu_github() {
    limparTela();
    printf("=== GitHub dos Alunos ===\n\n");
    printf("➡️ Publique seu projeto: https://github.com/new\n");
    printf("➡️ Explore repositórios dos colegas: https://github.com/topics/ifam\n");
    printf("➡️ Repositório exemplo: https://github.com/exemplo-ifam/ATP\n");
}
