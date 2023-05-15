
#include <stdio.h>
int main()
{

    int vetor[10], x = 0, num, mult = 0;

    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 10);

    printf("\nDigite um numero: \n");
    scanf("%d", &num);

    printf("\nMultiplos de %d \n", num);
    for (int y = 0; y < 10; y++)
    {

        if (vetor[y] % num == 0)
        {
            mult++;
            printf("%d, ", vetor[y]);
        }
    }
    printf("\nDos numeros digitados %d sao multiplos de %d\n", mult, num);

    printf("Array original: \n");
    for (int w = 0; w < 10; w++)
    {
        printf("%d, ", vetor[w]);
    }

    return 0;
}