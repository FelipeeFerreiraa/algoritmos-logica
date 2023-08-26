#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac);

int main()
{
    float num, fracao;
    int inteiro;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    frac(num, &inteiro, &fracao);

    printf("Numero: %f \nInteiro: %d \nFloat: %f\n", num, inteiro, fracao);

    return 0;
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}
