#include <stdio.h>
int main()
{

    int matriz[4][4], zeros, linhaNula = 0, colunaNula = 0;

    for (int x = 0; x < 4; x++)
    {

        for (int y = 0; y < 4; y++)
        {

            printf("Digite o elemento da linha %d e coluna %d ", x, y);
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

    // verificando linha da matriz
    for (int c = 0; c < 4; c++)
    {

        zeros = 0;
        for (int i = 0; i < 4; i++)
        {
            if (matriz[c][i] == 0)
            {
                zeros++;
            }
        }
        if (zeros == 4)
        {
            linhaNula++;
        }

    }

    // verificando coluna da matriz
    for (int f = 0; f < 4; f++)
    {

        zeros = 0;
        for (int g = 0; g < 4; g++)
        {
            if (matriz[g][f] == 0)
            {
                zeros++;
            }
        }
        if (zeros == 4)
        {
            colunaNula++;
        }
        
    }

    printf("\nEsta matriz tem %d linha(s) nula(s)\n", linhaNula);
    printf("\nEsta matriz tem %d coluna(s) nula(s)\n", colunaNula);

    return 0;
}