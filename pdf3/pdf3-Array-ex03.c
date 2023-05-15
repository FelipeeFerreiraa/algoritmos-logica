#include <stdio.h>
int main()
{

    int num[10], x = 0, numElevado[10];
    printf("Digite 10 numeros: \n");
    do
    {
        printf("numero %d: ", x + 1);
        scanf("%d, \n", &num[x]);
        x++;

    } while (x < 10);

    printf("\nPrimeiro Array: \n");
    for (int y = 0; y < 10; y++)
    {
        printf("%d, ", num[y]);
    }

    for (int z = 0; z < 10; z++)
    {
        numElevado[z] = num[z] * num[z];
    }

    printf("\n\nPrimeiro Array Elevado por 2: \n");
    for (int w = 0; w < 10; w++)
    {
        printf("%d, ", numElevado[w]);
    }

    return 0;
}