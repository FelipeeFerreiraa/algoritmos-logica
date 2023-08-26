#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ordenando(int *a, int *b, int *c);

int main()
{

    int num[3], retorno;

    printf("Digite 3 numeros inteiros: \n");
    for (int x = 0; x < 3; x++)
    {
        printf("Numero %d: \n", x + 1);
        scanf("%d", &num[x]);
    }

    retorno = ordenando(&num[0], &num[1], &num[2]);

    printf("Retorno da funcao: %d \n", retorno);

    printf("Numero1 : %d \n", num[0]);
    printf("Numero2 : %d \n", num[1]);
    printf("Numero3 : %d \n", num[2]);

    return 0;
}

int ordenando(int *a, int *b, int *c)
{
    int aux;
    if (*a == *b && *a == *c)
    {
        return 1;
    }

    if (*a < *b && *a < *c)
    {
        *a = *a;

        if (*c < *b)
        {
            aux = *b;
            *b = *c;
            *c = aux;

            return 0;
        }
        return 0;
    }

    if (*b < *a && *b < *c)
    {
        aux = *a;
        *a = *b;
        *b = aux;

        if (*c < *b)
        {
            aux = *b;
            *b = *c;
            *c = aux;

            return 0;
        }
        return 0;
    }

    if (*c < *b && *c < *a)
    {
        aux = *a;
        *a = *c;
        *c = aux;

        if (*c < *b)
        {
            aux = *b;
            *b = *c;
            *c = aux;

            return 0;
        }
        return 0;
    }

    return printf("Algo de errado nao esta certo!!!");
}