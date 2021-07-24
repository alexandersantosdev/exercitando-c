#include "stdlib.h"
#include "stdio.h"
#include <conio.h>

struct Endereco
{
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[50];
};

struct Pessoa
{
    char nome[50];
    struct Endereco endereco;
};

int main()
{

    struct Pessoa pessoa;
    printf("Nome: ");
    fgets(pessoa.nome, 40, stdin);
    printf("Rua: ");

    fgets(pessoa.endereco.rua, 40, stdin);
    printf("Bairro: ");

    fgets(pessoa.endereco.bairro, 40, stdin);
    printf("Cidade: ");

    fgets(pessoa.endereco.cidade, 40, stdin);
    printf("Numero: ");

    scanf("%d", &pessoa.endereco.numero);

    printf("\n\nNome: %s\nRua: %s\nBairro: %s\nCidade: %s\nNumero: %d",
           pessoa.nome,
           pessoa.endereco.rua,
           pessoa.endereco.bairro,
           pessoa.endereco.cidade,
           pessoa.endereco.numero);

    return 0;
}