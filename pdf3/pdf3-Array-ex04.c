#include <stdio.h>
int main()
{

    int vetor[8], x = 0;

    printf("Digite 8 numeros: \n");
    do
    {
        printf("numero %d: ", x + 1);
        scanf("%d, \n", &vetor[x]);
        x++;

    } while (x < 8);

    printf("\nPrimeiro Array: \n");
    for (int y = 0; y < 8; y++)
    {
        printf("%d, ", vetor[y]);
    }

    printf("\nValor no indice: 0 = %d\n", vetor[0]);
    printf("Valor no indice: 5 = %d\n", vetor[5]);
    printf("Somando os valores encontrados eh = %d\n", vetor[0] + vetor[5]);

    return 0;
}