#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void lerOsDados(int *loteria, int *meuBilhete);
int verificarDados(int *loteria, int *meuBilhete);

int main()
{
    // srand(time(NULL));

    // int loteria[6] = {10, 19, 20, 35, 43, 55}, meuBilhete[6] = {10, 20, 30, 40, 43, 50};

    int loteria[6], meuBilhete[6], acertos, *vetor;

    lerOsDados(loteria, meuBilhete);

    printf("Numeros da loteria: \n");
    for (int x = 0; x < 6; x++)
    {
        printf("%d, ", loteria[x]);
    }

    printf("\nMeu bilhete da sorte!: \n");
    for (int x = 0; x < 6; x++)
    {
        printf("%d, ", meuBilhete[x]);
    }

    acertos = verificarDados(loteria, meuBilhete);

    // printf("acertos= %d\n", acertos);

    vetor = (int *)malloc(acertos * sizeof(int));
    if (vetor == NULL)
    {
        printf("ERRO: memoria nao alocada!!!\n");
        exit(1);
    }

    for (int w = 0; w < 6; w++)
    {
        for (int c = 0; c < 6; c++)
        {
            if (meuBilhete[w] == loteria[c])
            {
                *(vetor + w) = meuBilhete[w];
            }
        }
    }

    printf("\nNumeros da sorte!!!: \n");
    for (int x = 0; x < acertos; x++)
    {
        printf("%d, ", *(vetor + x));
    }

    return 0;
}

void lerOsDados(int *loteria, int *meuBilhete)
{
    printf("Digite os seis numeros sorteados pela loteria: \n");
    for (int x = 0; x < 6; x++)
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &loteria[x]);
    }

    printf("Agora digite os seis numeros do seu bilhete!!!: \n");
    for (int x = 0; x < 6; x++)
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &meuBilhete[x]);
    }
}

int verificarDados(int *loteria, int *meuBilhete)
{
    int acertos = 0;
    for (int w = 0; w < 6; w++)
    {
        for (int c = 0; c < 6; c++)
        {
            if (meuBilhete[w] == loteria[c])
            {
                acertos++;
            }
        }
    }

    return acertos;
}