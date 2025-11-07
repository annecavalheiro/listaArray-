#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do usuário
typedef struct {
    char nome[50];
    int idade;
    char telefone[10];
} Usuario;

// Função para cadastrar usuários
void cadastrarUsuarios() {
    FILE *arquivo;
    Usuario u;
    int opcao;

    do {
        printf("\n CADASTRO DE USUÁRIOS \n");

        printf("Nome: ");
        fflush(stdin); // limpa buffer do teclado
        fgets(u.nome, 50, stdin);
        u.nome[strcspn(u.nome, "\n")] = '\0'; // remove o \n

        printf("Idade: ");
        scanf("%d", &u.idade);

        printf("Telefone: ");
        fflush(stdin);
        fgets(u.telefone, 20, stdin);
        u.telefone[strcspn(u.telefone, "\n")] = '\0';

        // Abre o arquivo em modo "append binary" (adiciona no final)
        arquivo = fopen("usuarios.dat", "ab");
        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

        // Escreve o usuário no arquivo binário
        fwrite(&u, sizeof(Usuario), 1, arquivo);
        fclose(arquivo);

        printf("\nUsuário cadastrado com sucesso!\n");
        printf("\nDeseja cadastrar outro usuário? (1-Sim / 4-Voltar ao menu): ");
        scanf("%d", &opcao);

        getchar(); // consome o ENTER pendente

    } while (opcao != 4);
}

// Função para listar usuários cadastrados
void listarUsuarios() {
    FILE *arquivo;
    Usuario u;
    int i = 1;

    arquivo = fopen("usuarios.dat", "rb"); // "rb" = leitura binária
    if (arquivo == NULL) {
        printf("\nNenhum usuário cadastrado ainda.\n");
        return;
    }

    printf("\n  LISTA DE USUÁRIOS \n");

    // Lê cada usuário até o fim do arquivo
    while (fread(&u, sizeof(Usuario), 1, arquivo) == 1) {
        printf("%d) Nome: %s | Idade: %d | Telefone: %s\n", i, u.nome, u.idade, u.telefone);
        i++;
    }

    fclose(arquivo);

    if (i == 1) {
        printf("Nenhum usuário encontrado.\n");
    }
}

// Função para remover um usuário pelo nome
void removerUsuario() {
    FILE *arquivo, *temp;
    Usuario u;
    char nomeRemover[50];
    int encontrado = 0;

    printf("\nDigite o nome do usuário a ser removido: ");
    fflush(stdin);
    fgets(nomeRemover, 50, stdin);
    nomeRemover[strcspn(nomeRemover, "\n")] = '\0';

    arquivo = fopen("usuarios.dat", "rb");
    temp = fopen("temp.dat", "wb");

    if (arquivo == NULL || temp == NULL) {
        printf("Erro ao abrir os arquivos!\n");
        return;
    }

    // Copia todos os usuários, menos o que será removido
    while (fread(&u, sizeof(Usuario), 1, arquivo) == 1) {
        if (strcmp(u.nome, nomeRemover) != 0) {
            fwrite(&u, sizeof(Usuario), 1, temp);
        } else {
            encontrado = 1;
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("usuarios.dat");
    rename("temp.dat", "usuarios.dat");

    if (encontrado)
        printf("\nUsuário removido com sucesso!\n");
    else
        printf("\nUsuário não encontrado.\n");
}

// Função principal
int main() {
    int opcao;

    do {
        printf("\n MENU PRINCIPAL \n");
        printf("1 - Cadastrar usuários\n");
        printf("2 - Listar usuários\n");
        printf("3 - Remover usuário\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // consome o ENTER

        switch (opcao) {
            case 1:
                cadastrarUsuarios();
                break;
            case 2:
                listarUsuarios();
                break;
            case 3:
                removerUsuario();
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}