#include <stdio.h>
int main()
{

    int matriz[3][3], soma = 0;

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
            soma = matriz[1][0] + matriz[2][0] + matriz[2][1];
        }
        printf("\n");
    }

    printf("\nA soma dos elementos que estao abaixo da diagonal principal eh: %d \n", soma);

    return 0;
}
