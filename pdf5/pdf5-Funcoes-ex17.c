#include <stdio.h>
#include <string.h>

void transposta(int matriz[10][10]);

int main()
{
    int matriz[10][10];

    printf("Forneca numeros para a matriz 10x10:\n");

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("Linha %d, Coluna %d: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("   %d   ", matriz[x][y]);
        }
        printf("\n");
    }

    transposta(matriz);

    return 0;
}

void transposta(int matriz[10][10])
{
    printf("Matriz transposta: \n");

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("   %d   ", matriz[y][x]);
        }
        printf("\n");
    }
}