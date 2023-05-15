#include <stdio.h>
int main()
{

    int num, pascal[50][50];

    printf("Digite um numero inteiro positivo: (sera o numero de linhas do triangulo de pascal)   \n ");
    scanf("%d", &num);

    pascal[0][0] = 1; // primeira elemento eh 1

    for (int j = 1; j < num; j++)
    {
        pascal[j][0] = 1;//todas as linhas primeiro elemento eh 1
        
        for (int i = 1; i < j; i++)
        {
            pascal[j][i] = pascal[j - 1][i - 1] + pascal[j - 1][i];
        }
        pascal[j][j] = 1;
    }

    for (int k = 0; k < num; k++)
    {
        for (int y = 0; y <= k; y++)
        {
            printf("%d  ", pascal[k][y]);
        }
        printf("\n");
    }
    return 0;
}