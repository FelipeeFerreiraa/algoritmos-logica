#include <stdio.h>
#include <string.h>

typedef struct cad
{
    int idade;
    char nome[50];
} cad;

int main()
{

    cad lista1[10];
    int x = 0, maisVelho, maisNovo, nomeMaisVelho, nomeMaisNovo;

    printf("Digite o nome de 10 pessoas e suas idades: \n");

    do
    {

        printf("Nome %d: ", x + 1);
        scanf(" %s", lista1[x].nome);
        printf("idade da %d pessoa: ", x + 1);
        scanf("%d", &lista1[x].idade);
        x++;

    } while (x <= 10);

    maisVelho = lista1[0].idade;
    maisNovo = lista1[0].idade;

    for (int y = 0; y < 10; y++)
    {
        if (maisVelho < lista1[y].idade)
        {
            maisVelho = lista1[y].idade;
            nomeMaisVelho = y;
        }

        if (maisNovo > lista1[y].idade)
        {
            maisNovo = lista1[y].idade;
            nomeMaisNovo = y;
        }
    }

    for (int w = 0; w < 10; w++)
    {
        printf("------Nome: %s\n", lista1[w].nome);
        printf("------Idade: %d\n", lista1[w].idade);
    }

    printf("O mais velho eh %s com %d anos\n", lista1[nomeMaisVelho].nome, maisVelho);

    printf("O mais novo eh %s com %d anos\n", lista1[nomeMaisNovo].nome, maisNovo);

    return 0;
}