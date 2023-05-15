#include <stdio.h>
int main()
{
    int x = 0, vetor[10], vetor2[10] = {0};
    printf(" Digite 10 numeros inteiros de 0 a 50: \n");

    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 10);

    // printf(" \nNumeros impares: \n");
    for (int y = 0; y < 10; y++)
    {

        if (vetor[y] % 2 != 0)
        {
            vetor2[y] = vetor[y];
            // printf("%d", vetor2[y]);
        }
        else {
            vetor2[y] = 0;
        }
    }

    // exibindo array
    printf(" \nArray original: \n");
    for (int z = 0; z < 10; z++)
    {

        printf("%d, ", vetor[z]);
    }

    // exibindo array impar
    printf(" \nArray de numeros impares: \n");
    for (int w = 0; w < 10; w++)
    {

        printf("%d, ", vetor2[w]);
    }

    return 0;
}