#include <stdio.h>
#include <strings.h>
int main()
{

    int matriz[3][6], somaColunaImpar = 0, mediaColuna2 = 0, mediaColuna4 = 0;

    // lendo matriz
    printf("\nDigite os elementos a matriz 3x6: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            printf("linha %d, coluna %d: \n ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibindo matriz
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            printf("   %d   ", matriz[x][y]);
            if ((y + 1) % 2 != 0)
            {
                somaColunaImpar = somaColunaImpar + matriz[x][y];
            }
        }
        mediaColuna2 = mediaColuna2 + matriz[x][1];
        mediaColuna4 = mediaColuna4 + matriz[x][3];
        printf("\n");
    }

    // mudando coluna 6
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            matriz[x][5] = matriz[x][0] + matriz[x][1];
        }
    }

    printf("\nA soma de todos os elementos nas coluna imapres eh = %d \n", somaColunaImpar);

    printf("A media aritmetica dos elementos da segunda coluna eh = %d \n", mediaColuna2 / 3);

    printf("A media aritmetica dos elementos da quarta coluna eh = %d \n", mediaColuna4 / 3);

    printf("Matriz modificada: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 6; y++)
        {
            printf("   %d   ", matriz[x][y]);
        }
        printf("\n");
    }
    return 0;
}