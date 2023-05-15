#include <stdio.h>
int main()
{

    int matriz[4][4];
    printf("Digite os numeros/elementos da Matriz: \n");
    // lendo a matriz
    for (int x = 0; x < 4; x++)
    {

        for (int y = 0; y < 4; y++)
        {

            printf("Digite o elemento da linha %d e coluna %d: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // percorrendo a matriz
    printf("\nMatriz:\n");
    for (int w = 0; w < 4; w++)
    {

        for (int z = 0; z < 4; z++)
        {

            printf("   %d   ", matriz[w][z]);
        }
        printf("\n");
    }

    // elementos das diagonais
    printf("\nOs elementos da diagonal sao: ");
    for (int c = 0; c < 4; c++)
    {

        for (int i = 0; i < 4; i++)
        {
            if (c == i)
            {
                printf("%d, ", matriz[c][i]);
            }
        }
    }

    return 0;
}