// bibliotecas
#include <stdio.h>
#include <string.h>

// criacao da struct territorio
typedef struct
{
    char nome[20]; // nome do territorio
    char cor[20];  // cor do territorio
    int qtd_tropa; // quantidade de tropas do territorio
} territorio;

int main()
{
    territorio mapa[5]; // vetor com 5 territorios

    // variavel auxiliar para percorrer o vetor
    int i;

    // print auxiliar para melhorar a legibilidade
    printf("=== Cadastro de Territorios ===\n");
    // cadastro de 5 territorios
    for (i = 0; i < 5; i++)
    {
        // print auxiliar para separar os territorios
        printf("Território %d:\n", i + 1);

        // pede o nome do primeiro territorio
        printf("Digite o nome do território: ");
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // Remove o '\n'
        // pede a cor do territorio
        printf("Digite a cor do território: ");
        fgets(mapa[i].cor, sizeof(mapa[i].cor), stdin);
        mapa[i].cor[strcspn(mapa[i].cor, "\n")] = '\0';
        // pede a quantidade de tropas do territorio
        printf("Digite a quantidade de tropas do território: ");
        scanf("%d", &mapa[i].qtd_tropa);
        getchar(); // Limpa o ENTER deixado pelo scanf

        printf("\n");
    }

    // exibir as informacoes do territorios cadastrados
    printf("\n=== Territórios Cadastrados ===\n\n");
    for (i = 0; i < 5; i++)
    {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", mapa[i].nome);
        printf("Cor do exército: %s\n", mapa[i].cor);
        printf("Tropas: %d\n\n", mapa[i].qtd_tropa);
    }

    return 0;
}
