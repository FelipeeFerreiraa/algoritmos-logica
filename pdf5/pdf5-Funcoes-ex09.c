#include <stdio.h>
#include <string.h>

void simplifica(int *numerador, int *denominador);

int maximoDivisorComum(int a, int b); // algoritmo de euclides para descobrir (mdc)

// main
int main()
{
    int denominador, numerador;
    printf("Digite um numero, sera o numerador: \n");
    scanf("%d", &numerador);
    printf("Digite outro numero sera o denominador: \n");
    scanf("%d", &denominador);

    printf("Fracao: %d/%d \n", numerador, denominador);

    simplifica(&numerador, &denominador);

    return 0;
}

void simplifica(int *numerador, int *denominador)
{
    int mdc;
    mdc = maximoDivisorComum(*numerador, *denominador);
    *denominador = *denominador / mdc;
    *numerador = *numerador / mdc;
    /*
    for (int x = 1; x <= *numerador; x++)
    {
        for (int y = 1; y < *denominador; y++)
        {
            if (*numerador % x == 0 && *denominador % y == 0 && x == y)
            {
                maiorFatorComun = maiorFatorComun * x;
                *denominador = *denominador / maiorFatorComun;
                *numerador = *numerador / maiorFatorComun;
            }
        }
    }
    */

    printf("Fracao Simplificada: %d/%d \n", *numerador, *denominador);
}

// algoritmo de euclides para descobrir (mdc)
int maximoDivisorComum(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return maximoDivisorComum(b, a % b);
    }
}