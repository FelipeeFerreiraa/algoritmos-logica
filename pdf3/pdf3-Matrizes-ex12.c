#include <stdio.h>
int main()
{

    int matriz[3][3], transposta[3][3];

    // lendo matriz
    printf("Digite os elementos da matriz: (3x3) \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("Digite o elemento da linha %d, e coluna %d: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibindo matriz
    printf("\nMatriz:  \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("    %d    ", matriz[x][y]);
        }
        printf("\n");
    }

    // gerando matriz transposta
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            transposta[x][y] = matriz[y][x];
        }
    }

    // exibindo matriz transposta
    printf("\nMatriz transposta:  \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("    %d    ", transposta[x][y]);
        }
        printf("\n");
    }

    return 0;
}