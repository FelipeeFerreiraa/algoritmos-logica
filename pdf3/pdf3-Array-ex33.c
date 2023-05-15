#include <stdio.h>
int main()
{

    int vetor[15], x = 0;

    printf("Digite 15 numeros: ");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 15);

    printf("Array: \n");
    for (int y = 0; y < 15; y++)
    {
        if (vetor[y] != 0)
        {
            printf("%d,", vetor[y]);
        }
    }

    return 0;
}