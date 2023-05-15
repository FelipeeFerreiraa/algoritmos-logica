#include <stdio.h>
int main()
{
    int vetor[10], x = 0, maior = 0, menor = 0;

    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 10);

    maior = vetor[0];
    menor = maior;

    for (int y = 0; y < 10; y++)
    {

        if (vetor[y] >= maior)
        {
            maior = vetor[y];
                }

        if (vetor[y] < menor)
        {
            menor = vetor[y];
        }
        printf("%d, ", vetor[y]);
    }

    printf("\nO maior numero digitado eh = %d\n", maior);
    printf("O menor numero digitado eh = %d", menor);

    return 0;
}