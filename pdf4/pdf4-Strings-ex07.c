#include <stdio.h>
#include <string.h>

int main()
{

    char nome1[50], nome2[50], aux[50], aux2[50];
    int qntdNome1 = 0, qntdNome2 = 0, x = 0;

    printf("Digite um nome: \n");
    fgets(nome1, 50, stdin);

    printf("Digite outro nome: \n");
    fgets(nome2, 50, stdin);

    do
    {
        if (nome1[x] != nome2[x])
        {
            printf("As strings sao diferentes");
            break;
        }

        if (nome1[x] == nome2[x])
        {
            printf("\nOs nomes tem o mesmo tamanho!");
            break;
        }
        x++;
    } while (nome1[x] != '\0' || nome2[x] != '\0');

    return 0;
}