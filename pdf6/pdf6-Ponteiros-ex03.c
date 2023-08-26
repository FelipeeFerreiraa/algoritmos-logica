#include <stdio.h>
#include <string.h>

void soma(float *a, float b);

int main()
{
    float numA, numB;

    printf("Digite um numero A: \n");
    scanf("%f", &numA);

    printf("Digite um numero B: \n");
    scanf("%f", &numB);

    printf("Numero A: %.2f\n", numA);
    printf("Numero B: %.2f\n", numB);

    soma(&numA, numB);
    printf("A soma dos numeros lidos eh = %.2f \n", numA);

    printf("\n-----------Depois da funcao--------\n");
    printf("Numero A: %.2f\n", numA);
    printf("Numero B: %.2f\n", numB);
    return 0;
}

void soma(float *a, float b)
{
    *a = *a + b;
}