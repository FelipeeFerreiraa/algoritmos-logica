#include <stdio.h>
int main()
{

    int v[6], x = 0, v1[6] = {0}, v2[6] = {0}, qtdPar = 0, qtdImpar = 0, soma = 0;

    // lendo array
    printf("Digite seis numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &v[x]);
        x++;
    } while (x < 6);

    // exibindo o array
    printf("\nArray: \n");
    for (int c = 0; c < 6; c++)
    {
        printf("%d, ", v[c]);
    }

    // trocando valores
    for (int w = 0; w < 6; w++)
    {
        if (v[w] % 2 == 0)
        {                      // pares
            v2[qtdPar] = v[w]; // qtdPar cmç com 0 q eh o primeiro indice
            qtdPar++;          // dps vai aumentando ate acabar, qnd acaba
        }                      // eh o ultimo indice

        if (v[w] % 2 != 0)
        { // impares
            v1[qtdImpar] = v[w];
            qtdImpar++;
        }
    }

    // exibindo o array PARES
    printf("\nArray (pares): \n");
    for (int i = 0; i < qtdPar; i++)
    {
        soma = soma + v2[i];
        printf("%d, ", v2[i]);
    }

    printf("\nA soma dos numeros pares digitados eh = %d", soma);

    // exibindo o array IMPARES
    printf("\nArray (impares): \n");
    for (int y = 0; y < qtdImpar; y++)
    {
        printf("%d, ", v1[y]);
    }

    printf("\nA quantidade de numeros impares digitados eh = %d", qtdImpar);

    return 0;
}