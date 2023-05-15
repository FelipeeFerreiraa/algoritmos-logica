#include <stdio.h>
int main()
{

    int tabela[4][5], soma = 0, soma1 = 0, soma2 = 0, soma3 = 0, soma0 = 0;
    printf("Digite os numeros/elementos da tabela: \n");
    // lendo a matriz
    for (int x = 0; x < 4; x++)
    {

        for (int y = 0; y < 5; y++)
        {

            printf("Digite o elemento da linha %d e coluna %d ", x, y);
            scanf("%d", &tabela[x][y]);
        }
    }

    // percorrendo a matriz
    printf("\nTabela:\n");
    for (int w = 0; w < 4; w++)
    {

        for (int z = 0; z < 5; z++)
        {

            printf("   %d   ", tabela[w][z]);
        }
        printf("\n");
    }

    // soamndo
    for (int c = 0; c < 4; c++)
    {

        for (int i = 0; i < 5; i++)
        {
            if (c == 0)
            {
                soma0 = soma0 + tabela[c][i];
            }

            if (c == 1)
            {
                soma1 = soma1 + tabela[c][i];
            }

            if (c == 2)
            {
                soma2 = soma2 + tabela[c][i];
            }

            if (c == 3)
            {
                soma3 = soma3 + tabela[c][i];
            }

            soma = soma + tabela[c][i];
        }
    }

    printf("\nA soma da linha 0 eh %d \n", soma0);
    printf("\nA soma da linha 1 eh %d \n", soma1);
    printf("\nA soma da linha 2 eh %d \n", soma2);
    printf("\nA soma da linha 3 eh %d \n", soma3);
    printf("\nA soma de todos os elementos eh %d \n", soma);

    return 0;
}