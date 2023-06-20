
#include <stdio.h>
#include <strings.h>

int main()
{
    char nome[50];
    printf("Digite um nome: \n");
    fgets(nome, 50, stdin);

    printf("As quatro primeiras letras do nome digitado: \n");
    for (int x = 0; x < 4; x++)
    {
        printf(" %c, ", nome[x]);
    }

    return 0;
}