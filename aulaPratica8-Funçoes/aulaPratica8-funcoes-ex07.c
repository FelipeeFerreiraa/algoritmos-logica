#include <stdio.h>
#include <string.h>

float calculandoS(int a);

// main
int main()
{
    int num;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &num);

    printf("O valor da equacao, com base no valor fornecido eh %f\n", calculandoS(num));

    float resultado = calculandoS(num);
    printf("O valor da equacao, com base no valor fornecido eh %f\n", resultado);
}

// funcao
float calculandoS(int a)
{
    float S = 0.0; // usar 0.0 faz diferença
    for (int y = 1; y <= a; y++)
    {
        S = S + (1.0 / y); // usar 1.0 faz diferença
    }

    return S;
}