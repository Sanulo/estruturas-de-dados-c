#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 50
#define TAM_STRIG 100

struct Book
{
    char name[TAM_STRIG];
    char author[TAM_STRIG];
    char publisher[TAM_STRIG];
    int edition;
};

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    struct Book library[MAX_BOOKS];
    int totalBooks = 0;
    int option;

    do
    {
        printf("================================\n");
        printf("    BIBLIOTECA PARTE 1\n");
        printf("================================\n");
        printf("1- Cadastrar novo livro\n");
        printf("2- Listar todos os livros\n");
        printf("0- Sair\n");
        printf("--------------------------------\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        clearBuffer();

        switch (option)
        {
        case 1:
            printf("--- Cadastro de Novo Livro ---\n\n");
            if (totalBooks < MAX_BOOKS)
            {
                printf("Nome do livro: ");
                fgets(library[totalBooks].name, TAM_STRIG, stdin);

                printf("Nome do Autor: ");
                fgets(library[totalBooks].author, TAM_STRIG, stdin);

                printf("Nome da editora: ");
                fgets(library[totalBooks].publisher, TAM_STRIG, stdin);

                library[totalBooks].name[strcspn(library[totalBooks].name, "\n")] = '\0';
                library[totalBooks].author[strcspn(library[totalBooks].author, "\n")] = '\0';
                library[totalBooks].publisher[strcspn(library[totalBooks].publisher, "\n")] = '\0';

                printf("Informe a edicao: ");
                scanf("%d", &library[totalBooks].edition);
                clearBuffer();

                totalBooks++;

                printf("\nLivro cadastrado com sucesso!\n");
            }
            else
            {
                printf("Biblioteca cheia! Nao e possivel cadastrar mais livros.\n");
            }

            printf("\nPressione Enter para continuar...");
            getchar();
            break;

        case 2:
            printf("--- Lista de livros cadastrados ---\n\n");

            if (totalBooks == 0)
            {
                printf("Nenhum livro cadastrado ainda. \n");
            }
            else
            {
                for (int i = 0; i < totalBooks; i++)
                {
                    printf("----------------------------------\n");
                    printf("LIVRO %d\n", i + 1);
                    printf("Nome: %s\n", library[i].name);
                    printf("Autor: %s\n", library[i].author);
                    printf("Editora: %s\n", library[i].publisher);
                }
                printf("--------------------------------------\n");
            }

            printf("\nPressione Enter para continuar...");
            getchar();
            break;

        case 0:
            printf("Saindo do sistema...\n");
            break;

        default:
            printf("Opcao invalida! Tente noavemnte.\n");
            printf("\nPressione Enter para continuar...\n\n");
            break;
        }
    } while (option != 0);
}