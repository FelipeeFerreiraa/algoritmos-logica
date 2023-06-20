#include <stdio.h>
#include <string.h>

typedef struct racional
{
    int num1, num2;
} racional;

float reduz(float a, float b);
int neg(int a);
int soma(int a, int b);
int mult(int a, int b);
float div(float a, float b);

int main()
{

    racional inteiro;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &inteiro.num1);

    do
    {
        printf("Digite outro numero inteiro n/nulo: \n");
        scanf("%d", &inteiro.num2);
    } while (inteiro.num2 <= 0);

    printf("Funcao reduz = %.2f \n", reduz(inteiro.num1, inteiro.num2));

    printf("Funcao neg = %d \n", neg(inteiro.num1));

    printf("Funcao soma = %d \n", soma(inteiro.num1, inteiro.num2));

    printf("Funcao mult = %d \n", mult(inteiro.num1, inteiro.num2));

    printf("Funcao div = %.2f \n", div(inteiro.num1, inteiro.num2));

    return 0;
}

float reduz(float a, float b)
{
    return a / b;
}

int neg(int a)
{
    return -a;
}

int soma(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

float div(float x, float y)
{
    return x / y;
}