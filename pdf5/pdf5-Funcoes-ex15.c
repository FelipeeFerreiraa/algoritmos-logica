#include <stdio.h>
#include <string.h>

int recebe4x4(int matriz[][4], int linha);

int main()
{
    int matriz[4][4];

    printf("Digite os numeros da matriz 4x4: \n");

    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("Linha %d, coluna %d: \n", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    printf("A matriz fornecida possui %d numeros maiores que dez.!!", recebe4x4(matriz, 4));

    return 0;
}

int recebe4x4(int matriz[][4], int linha)
{
    int valoresMaior10 = 0;
    for (int x = 0; x < linha; x++)
    {
        for (int y = 0; y < linha; y++)
        {
            if (matriz[x][y] > 10)
            {
                valoresMaior10++;
            }
        }
    }

    return valoresMaior10;
}