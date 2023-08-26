#include <stdio.h>
#include <string.h>

void maiorMenor(int a, int b, int *maior, int *menor);

int main()
{

    int num1, num2, maior, menor;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &num1);

    printf("Digite outro valor: \n");
    scanf("%d", &num2);

    maiorMenor(num1, num2, &maior, &menor);

    printf("Maior: %d \n", maior);
    printf("Menor: %d \n", menor);

    return 0;
}

void maiorMenor(int a, int b, int *maior, int *menor)
{
    if (a > b)
    {
        *maior = a;
    }

    if (b > a)
    {
        *maior = b;
    }

    if (a < b)
    {
        *menor = a;
    }

    if (b < a)
    {
        *menor = b;
    }
}