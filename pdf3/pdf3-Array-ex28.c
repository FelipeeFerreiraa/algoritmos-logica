#include <stdio.h>
int main()
{

    int v[10], x = 0, v1[10] = {0}, v2[10] = {0}, qtdPar = 0, qtdImpar = 0;

    // lendo array
    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &v[x]);
        x++;
    } while (x < 10);

    // exibindo o array
    printf("\nArray: \n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d, ", v[c]);
    }

    // trocando valores
    for (int w = 0; w < 10; w++)
    {
        if (v[w] % 2 == 0)
        { // pares
            v2[qtdPar] = v[w]; // qtdPar cmç com 0 q eh o primeiro indice
            qtdPar++;          // dps vai aumentando ate acabar, qnd acaba
        }                      // eh o ultimo indice

        if (v[w] % 2 != 0)
        { // impares
            v1[qtdImpar] = v[w];
            qtdImpar++;
        }
    }

    // exibindo o array v1
    printf("\nArray V1 (impares): \n");
    for (int y = 0; y < qtdImpar; y++)
    {
        printf("%d, ", v1[y]);
    }

    // exibindo o array v2
    printf("\nArray V2 (pares): \n");
    for (int i = 0; i < qtdPar; i++)
    {
        printf("%d, ", v2[i]);
    }

    return 0;
}