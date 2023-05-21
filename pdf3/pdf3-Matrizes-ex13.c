#include <stdio.h>
int main()
{

    int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int matTrianSup[4][4];

    // matriz 4x4 origiinal
    printf("Matriz original: \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("    %d    ", matriz[x][y]);
        }
        printf("\n");
    }

    // matriz triangular superior 4x4
    printf("Matriz triangular superior: \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            matTrianSup[x][y] = matriz[x][y];
            if (y > x)
            {
                matTrianSup[x][y] = 0;
            }
            printf("    %d    ", matTrianSup[x][y]);
        }
        printf("\n");
    }

    return 0;
}