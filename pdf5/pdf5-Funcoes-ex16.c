#include <stdio.h>
#include <string.h>

int calculandoTrianInfer(int matriz3x3[3][3], int a);

int main()
{

    int matriz3x3[3][3], soma;

    printf("Forneca numeros para a matriz 3x3:\n");

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("Linha %d, Coluna %d: ", x, y);
            scanf("%d", &matriz3x3[x][y]);
        }
    }

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("   %d   ", matriz3x3[x][y]);
        }
        printf("\n");
    }

    soma = calculandoTrianInfer(matriz3x3, 3);

    printf("A soma dos elementos ques estao abaixo da diagonal principal eh = %d \n", soma);

    return 0;
}

int calculandoTrianInfer(int matriz3x3[3][3], int a)
{
    int soma = 0;
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < a; y++)
        {
            if (x > y)
            {
                soma = soma + matriz3x3[x][y];
              //  printf("soma = %d", soma);
            }
        }
    }

    // soma = soma + *matriz3x3[1][0] + *matriz3x3[2][0] + *matriz3x3[2][1];
    //printf("soma = %d \n", soma);
    return soma;
}