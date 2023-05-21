#include <stdio.h>
#include <strings.h>

int main()
{

    int matriz[3][3], soma[3];

    // lendo matriz
    printf("Digite os elementos daa matriz 3x3: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("linha %d, coluna %d: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibindo matriz
    printf("Matriz: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("  %d  ", matriz[x][y]);
            soma[y] = matriz[0][y] + matriz[1][y] + matriz[2][y];
        }
        printf("\n");
    }

    printf("\nVetor com a soma das colunas da matriz: \n");
    for (int y = 0; y < 3; y++)
    {
        printf("  %d  ", soma[y]);
    }

    return 0;
}