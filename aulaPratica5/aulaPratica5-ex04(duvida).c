#include <stdio.h>
int main()
{

    int a[3][3], b[3][3], c[3][3]={0};

    // lendo a
    for (int c = 0; c < 3; c++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("Digite um elemento para a linha %d e coluna %d da matriz A: ", c, i);
            scanf("%d", &a[c][i]);
        }
    }

    // lendo b
    for (int w = 0; w < 3; w++)
    {
        for (int z = 0; z < 3; z++)
        {
            printf("Digite um elemento para a linha %d e coluna %d da matriz B: ", w, z);
            scanf("%d", &b[w][z]);
        }
    }

    // multiplicando matrizes A*B
    for (int k = 0; k < 3; k++)
    {
        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                c[k][x] = c[k][x] + a[k][y] * b[y][x];
            }
        }
    }

    // exibindo matriz C
    for (int f = 0; f < 3; f++)
    {
        for (int e = 0; e < 3; e++)
        {
            printf("  %d  ", c[f][e]);
        }
        printf("\n");
    }

    return 0;
}