#include <stdio.h>
int main()
{

    int matriz[5][5], num, linha, coluna, maior;

    printf("Digite os elementos da matriz 5x5: \n");

    // lendo a matriz
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("Numero linha %d, coluna %d: ", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }

    // exibindo a matriz
    for (int z = 0; z < 5; z++)
    {
        for (int w = 0; w < 5; w++)
        {
            printf("     %d     ", matriz[z][w]);
        }
        printf("\n");
    }

    printf("Digite um numero para verificar se ele esta na matriz: \n");
    scanf("%d", &num);

    // verificando se encontra o elemento
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] == num)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("O numero digitado foi encontrado na linha %d, e na coluna %d.", linha, coluna);

    return 0;
}