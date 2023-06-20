#include <stdio.h>
#include <string.h>

float calcularS(int a);

int main()
{

    int num;
    float S;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    S = calcularS(num);

    printf("Resultado: %f \n", S);

    return 0;
}

float calcularS(int a)
{
    float soma = 0;
    float numerador, denominador;

    for (int x = 1; x <= a; x++)
    {

        numerador = x * x + 1;
        denominador = x + 3;
       // printf("x=%f\n", numerador);

        soma = soma + numerador / denominador;
    }

    return soma;
}