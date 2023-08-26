#include <stdio.h>
#include <string.h>

int main()
{

    float matriz[3][3];

    printf("preencha a matriz 3x3\n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("Linha %d, coluna %d \n", x, y);
            scanf("%f", &matriz[x][y]);
        }
    }

    printf("\nOs numeros fornecidos sao: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("[%f], ", matriz[x][y]);
        }
    }

    printf("\n\nO endereco de memoria de cada numero fornecido eh: \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("[%d], ", &matriz[x][y]);
        }
    }

    return 0;
}