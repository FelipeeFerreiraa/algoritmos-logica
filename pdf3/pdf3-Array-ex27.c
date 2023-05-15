#include <stdio.h>
int main()
{

    int vetor[10], x = 0, posicao, primo;

    // lendo array
    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 10);

    // verificando se eh primo
    for (int j = 0; j < 10; j++)
    {
        primo = 1;
        for (int k = 2; k < vetor[j]; k++)
        {
            if (vetor[j] % k == 0)
            {

                primo = 0;
            }
        }

        if (primo == 1)
        {
            posicao = j;
            printf("\n\nPosicao: %d ,", posicao);
            printf("Numero: %d, \n ", vetor[j]);
        }
    }

    // exibindo o array
    printf("\nArray: \n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d, ", vetor[c]);
    }

    return 0;
}