#include <stdio.h>
#include <string.h>

float calcular(float a, float b, char simbolo);

int main()
{

    char simb;
    float resultado, num1, num2;
    printf("Digite um numero: \n");
    scanf("%f", &num1);

    printf("Digite outro numero: \n");
    scanf("%f", &num2);

    printf("Digite o simbolo da operacao desejada: \n [ + ], [ - ], [ * ], [ / ] \n");
    scanf(" %c", &simb);

    resultado = calcular(num1, num2, simb);

    printf("O resultado eh = %.2f \n", resultado);

    return 0;
}

float calcular(float a, float b, char simbolo)
{
    if (simbolo == '+')
    {
        return a + b;
    }

    if (simbolo == '-')
    {
        return a - b;
    }

    if (simbolo == '*')
    {
        return a * b;
    }

    if (simbolo == '/')
    {
        return a / b;
    }
    
}