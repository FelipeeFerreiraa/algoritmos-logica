#include <stdio.h>
#include <string.h>

void gerarTriangulo(int a);

int main()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    gerarTriangulo(num);

    return 0;
}

void gerarTriangulo(int a)
{
    for (int y = 0; y < a; y++) //controla as linhas

    {

        for (int w = 0; w < a - y - 1; w++) //espaços 
        {
            printf(" ");
        }

        for (int x = 0; x < 2 * y - 1; x++) //[ 2 * y - 1]asterisco em cada linha
        {
            printf("*");
        }

        printf("\n");
    }
}