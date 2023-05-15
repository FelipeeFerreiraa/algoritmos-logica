#include <stdio.h>
int main()
{

    int matriz[4][4], maior = 0, linha, coluna;

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
            printf("     %d     ", matriz[z][w]);
        }
        printf("\n");
    }

    // verificando o maior elemento
    maior = matriz[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nO maior elemento eh = %d, e ele esta na linha %d, e na coluna %d", maior, linha, coluna);

    return 0;
}