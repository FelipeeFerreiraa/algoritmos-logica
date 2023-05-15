#include <stdio.h>
int main()
{

    int mat1[4][4], mat2[4][4], matMaior[4][4];

    // lendo matriz 1
    printf("Digite os elementos da matriz1: (4x4) \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("Digite o elemento da linha %d, e coluna %d: ", x, y);
            scanf("%d", &mat1[x][y]);
        }
    }

    // lendo matriz 2
    printf("Digite os elementos da matriz2: (4x4) \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("Digite o elemento da linha %d, e coluna %d: ", x, y);
            scanf("%d", &mat2[x][y]);
        }
    }

    // exibindo matriz1
    printf("\nMatriz 1:  \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("    %d    ", mat1[x][y]);
        }
        printf("\n");
    }

    // exibindo matriz2
    printf("\nMatriz 2:  \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("    %d    ", mat2[x][y]);
        }
        printf("\n");
    }

    // verificando matriz com os maiores elementos
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            if (mat1[x][y] > mat2[x][y])
            {
                matMaior[x][y] = mat1[x][y];
            }
            else if (mat2[x][y] > mat1[x][y])
            {
                matMaior[x][y] = mat2[x][y];
            }
        }
    }

    // exibindo matriz com os maiores elementos
    printf("\nMatriz com os maiores elementos:  \n");
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("    %d    ", matMaior[x][y]);
        }
        printf("\n");
    }

    return 0;
}