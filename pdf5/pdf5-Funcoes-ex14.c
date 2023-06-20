#include <stdio.h>
#include <string.h>

void retornaVetor(int *vetor, int num);
void retornaVetorInverso(int *vetor, int num);
void maiorMenorDoVetor(int *vetor, int num, int *maior, int *menor);

int main()
{
    int num, x = 0;

    printf("Quantos numeros voce quer digitar no vetor: \n");
    scanf("%d", &num);

    int vetor[num], maior, menor;
    do
    {
        printf("Numero %d: \n", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < num);

    printf("\n\nImpressao normal do vetor: \n");
    retornaVetor(vetor, num);

    printf("\n\nImpressao inversa do vetor: \n");
    retornaVetorInverso(vetor, num);

    maiorMenorDoVetor(vetor, num, &maior, &menor);
    printf("\n\nO maior elemento do array eh = %d\n", maior);

    printf("\nO menor elemento do array eh = %d\n", menor);

    return 0;
}

void retornaVetor(int *vetor, int num)
{
    for (int x = 0; x < num; x++)
    {
        printf("%d, ", vetor[x]);
    }
}

void retornaVetorInverso(int *vetor, int num)
{
    for (int x = num - 1; x >= 0; x--)
    {
        printf("%d, ", vetor[x]);
    }
}

void maiorMenorDoVetor(int *vetor, int num, int *maior, int *menor)
{
    *maior = vetor[0], *menor = vetor[0];

    for (int x = 0; x < num; x++)
    {
        if (vetor[x] > *maior)
        {
            *maior = vetor[x];
        }

        if (vetor[x] < *menor)
        {
            *menor = vetor[x];
        }
    }
}
