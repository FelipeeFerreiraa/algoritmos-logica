#include <stdio.h>
int main()
{

    int matriz[5][5];

    printf("Digite os elementos da matriz 5x5: \n");

    // lendo a matriz
    for (int x = 0; x < 5; x++)
    {

        for (int y = 0; y < 5; y++)
        {
            printf("Numero linha %d, coluna %d:  ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibindo a matriz
    printf("\nMatriz fornecida: \n");
    for (int w = 0; w < 5; w++)
    {

        for (int z = 0; z < 5; z++)
        {
            printf("    %d    ", matriz[w][z]);
        }
        

        printf("\n");
    }

    // matriz identidade
    printf("\n\nMatriz Identidade: \n");
    for (int f = 0; f < 5; f++)
    {

        for (int c = 0; c < 5; c++)
        {
            if (f == c) // diadonal principal recebe 1
            {
                matriz[f][c] = 1;
            }
            if (f != c) // outros elementos recebe 0
            {
                matriz[f][c] = 0;
            }
            printf("    %d    ", matriz[f][c]);
        }
        printf("\n");
    }

    return 0;
}