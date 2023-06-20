#include <stdio.h>
#include <string.h>
#include <time.h>

int somaElementos(int matriz[7][6], int coluna);

// maiiin
int main()
{
    srand(time(NULL));

    int matriz[7][6], soma;

    for (int x = 0; x < 7; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            matriz[x][y] = rand() % 9 + 1;
        }
    }

    printf("Matriz: \n");

    for (int x = 0; x < 7; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            printf("   %d   ", matriz[x][y]);
        }
        printf("\n");
    }

    soma = somaElementos(matriz, 3);

    printf("A soma dos elementos da coluna eh = %d \n", soma);

    return 0;
}

// funcao
int somaElementos(int matriz[7][6], int coluna)
{
    int soma = 0;

    for (int x = 0; x < 7; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            if (coluna == y)
            {
                soma = soma + matriz[x][y];
            }
        }
    }
    if (coluna > 6 || coluna < 0)
    {
        printf("Coluna invalida!");
    }

    return soma;
}