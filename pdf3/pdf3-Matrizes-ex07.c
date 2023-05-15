#include <stdio.h>
int main()
{

    int matriz[10][10];

    // gerando matriz
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            if (x < y)
            {
                matriz[x][y] = ((2 * x) + (7 * y) - 2);
            }
            if (x == y)
            {
                matriz[x][y] = ((3 * (x * x)) - 1);
            }
            if (x > y)
            {
                matriz[x][y] = ((4 * (x * x * x)) - (5 * (y * y)) + 1);
            }
        }
    }

    //exibindo matriz
    // exibindo matriz com os maiores elementos
    printf("\nMatriz 10x10:  \n");
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            printf("|  %d  |", matriz[x][y]);
        }
        printf("\n");
    }

    return 0;
}