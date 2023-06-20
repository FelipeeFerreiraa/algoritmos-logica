#include <stdio.h>
#include <string.h>

int somaCubo(int n);

int main()
{

    int num, res;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    res = somaCubo(num);

    printf("A soma dos %d primeiros numeros de 1 a %d elevados ao cubo eh = %d", num, num, res);

    return 0;
}

int somaCubo(int n)
{
    if (n * n * n == 1) //caso base
    {
        return 1;
    }
    else
    {
        return n * n * n + somaCubo(n - 1);
    }
}