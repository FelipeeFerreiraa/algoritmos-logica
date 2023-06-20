#include <stdio.h>
#include <strings.h>

int main()
{
    char nome[50], aux[50]={0};
    int qntDeLetras;
    printf("Digite um nome: \n");
    fgets(nome, 50, stdin);

    // verificando quantas letras
    for (int x = 0; nome[x] != '\0'; x++)
    {
        aux[x] = nome[x];
        qntDeLetras = x;
    }

    printf("Nome digitado: %s \nPossui %d letras.", nome, qntDeLetras);

    return 0;
}