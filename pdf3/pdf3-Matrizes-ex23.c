#include <stdio.h>
#include <strings.h>
int main()
{

    int a[3][3], aux1[3][3] = {0};

    // lendo a
    printf("Digite os elementos da matriz A 3x3: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("linha %d, coluna %d: \n", x, y);
            scanf("%d", &a[x][y]);
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

    printf("\nMatriz A*A\n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int k = 0; k < 3; k++)
            {
                aux1[x][y] = aux1[x][y] + (a[x][k] * a[k][y]); // c[x][y] +
            }
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("   %d   ", aux1[x][y]);
        }
        printf("\n");
    }
    return 0;
}