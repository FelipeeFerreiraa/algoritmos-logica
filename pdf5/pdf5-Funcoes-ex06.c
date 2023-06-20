#include <stdio.h>
#include <string.h>

void verificarTriangulo(int a, int b, int c);
void tipoTriangulo(int a, int b, int c);

int main()
{

    int num1, num2, num3;

    printf("Digite tres numeros maiores que zero: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    verificarTriangulo(num1, num2, num3);

    return 0;
}

void verificarTriangulo(int a, int b, int c)
{
    if (a + b > c && c + a > b && b + c > a)
    {
        printf("Com os valores fornecidos podemos formar um triangulo!!!\n");
         tipoTriangulo(a, b, c);
    }
    else
    {
        printf("Nao eh possivel formar um triangulo.\n");
    }
}

void tipoTriangulo(int a, int b, int c)
{
    if (a == b && a == c)
    {
        printf("Equilatero\n");
    }

    if (a == b && a != c || a == c && c != b || b == c && c != a)
    {
        printf("Isosceles\n");
    }

    if (a != b && a != c && b!=c)
    {
        printf("Escaleno\n");
    }
}