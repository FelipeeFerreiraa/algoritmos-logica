#include <stdio.h>
int main()
{

    int matriz[4][4], maior10 = 0;

    printf("Digite os elementos da matriz 4x4: \n");

    // lendo a matriz
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("Numero linha %d, coluna %d: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibindo a matriz
    for (int z = 0; z < 4; z++)
    {
        for (int w = 0; w < 4; w++)
        {

            if (matriz[z][w] > 10)
            {
                maior10++;
            }
            printf("     %d     ", matriz[z][w]);
        }
        printf("\n");
    }

    printf("A matriz possui %d numeros maiores que dez! (>10)", maior10);

    return 0;
}