#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N, *vetor, X;
    srand(time(NULL));

    printf("Digite um numero: \n");
    scanf("%d", &N);

    vetor = malloc(N * sizeof(int));
    if (vetor)
    {
        printf("MEMORIA ALOCADA COM SUCESSSSSSOO!!\n");
    }
    else
    {
        printf("ERRO ao alocar memoria!!\n");
    }

    // printf("Forneca numeros para preencher o Array com %d numeros: \n", N);

    // for (int x = 0; x < N; x++)
    // {
    //     printf("Numero %d: \n", x + 1);
    //     scanf("%d", vetor + x);
    // }

    for (int x = 0; x < N; x++)
    {
        *(vetor + x) = rand() % 100;
    }

    printf("Array: \n");
    for (int w = 0; w < N; w++)
    {
        printf("%d, ", *(vetor + w));
    }

    printf("\nDigite outro numero: \n");
    scanf("%d", &X);

    printf("Multiplos de %d, presentes no array: \n", X);
    for (int y = 0; y < N; y++)
    {
        if (*(vetor + y) % X == 0)
        {
            printf("%d , ", *(vetor + y));
        }
    }

    return 0;
}