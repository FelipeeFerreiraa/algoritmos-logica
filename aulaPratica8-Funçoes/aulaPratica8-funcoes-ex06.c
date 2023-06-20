#include <stdio.h>
#include <string.h>

float calculandoE(int a);

// main
int main()
{
    int num;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &num);

    printf("O valor da equacao, com base no valor fornecido eh %f", calculandoE(num));
}

// funcao
float calculandoE(int a)
{

    float E = 1.0;
    float fatorial = 1; // inicializa o fatorial como 1

    for (int y = 1; y <= a; y++)
    {
        fatorial = fatorial * y; // Calcula o fatorial atual multiplicando pelo próximo número
        //1*1 dps 1*2 dps 2*2

        E = E + 1.0 / fatorial;
    }

    return E;
}