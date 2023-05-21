#include <stdio.h>
#include <strings.h>
int main()
{

    int a[3][3], b[3][3], c[3][3] = {0};

    // lendo a
    printf("Digite os elementos da primeira matriz 3x3: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("linha %d, coluna %d: \n", x, y);
            scanf("%d", &a[x][y]);
        }
    }

    // lendo b
    printf("Digite os elementos da segunda matriz 3x3: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("linha %d, coluna %d: \n", x, y);
            scanf("%d", &b[x][y]);
        }
    }

    printf("\nMatriz A: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("   %d   ", a[x][y]);
        }
        printf("\n");
    }

    printf("\nMatriz B: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("   %d   ", b[x][y]);
        }
        printf("\n");
    }

    printf("\nMatriz C\n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[x][y] = c[x][y] + (a[x][k] * b[k][y]); // c[x][y] +
            }
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("   %d   ", c[x][y]);
        }
        printf("\n");
    }
    return 0;
}