#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int negativos(float *vet, int N);

int main()
{
    int num;
    float *vetor;

    printf("Digite numeros para preencher o array, quantos numeros voce pretende digitar? ");
    scanf("%d", &num);

    vetor = malloc(num * sizeof(float));

    if (vetor == NULL)
    {
        printf("Erro na alocacao de memoria!!!!\n");
    }

    for (int x = 0; x < num; x++)
    {
        printf("Numero %d: \n", x + 1);
        scanf("%f", vetor + x);
    }

    printf("Array: \n");
    for (int y = 0; y < num; y++)
    {
        printf("%.2f, ", *(vetor + y));
    }

    printf("\nNumeros negativos presentes no array eh= %d\n", negativos(vetor, num));
    return 0;
}

int negativos(float *vet, int N)
{
    int neg = 0;

    for (int x = 0; x < N; x++)
    {
        if (*(vet + x) < 0)
        {
            neg++;
        }
    }

    return neg;
}