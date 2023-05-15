
#include <stdio.h>
int main()
{

    int vetor[10], x = 0, pares = 0;

    printf("Digite dez numeros: \n");

    do
    {
        printf("Numero %d ", x + 1);
        scanf("%d", &vetor[x]);

        x++;

    } while (x < 10);

    printf("Array: \n");
    for (int y = 0; y < 10; y++)
    {

        if (vetor[y] % 2 == 0)
        {
            pares++;
        }
        printf("%d, ", vetor[y]);
    }

    printf("\nVoce digitou %d numeros pares.", pares);

    return 0;
}