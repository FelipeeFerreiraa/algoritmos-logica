#include <stdio.h>
int main()
{

    int vetor[10], x = 0;

    printf("Digite 10 numeros: \n");

    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 10);

    for (int y = 0; y < 10; y++)
    {
        if (vetor[y] < 0)     //se o numero no array for negativo recebe 0
        {
            vetor[y] = 0;
        }

        printf("%d, ", vetor[y]);
    }

    return 0;
}