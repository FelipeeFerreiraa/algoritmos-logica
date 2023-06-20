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
    float dividendo, divisor;
    float S = 0.0; // usar 0.0 faz diferença
    for (int w = 1; w <= a; w++)
    {
        dividendo = (w * w) + 1;
        divisor = w + 3;
        // termo = (dividendo / divisor);
        S = S + (dividendo / divisor);

        //printf("%f dividendo", dividendo);
        //printf("%f divisor", divisor);
    }

    return S;
}
