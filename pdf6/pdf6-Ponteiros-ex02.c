#include <stdio.h>
#include <string.h>

float somaDoDobro(int *a, int *b);

int main()
{

    int numA, numB;

    printf("Digite um numero A: \n");
    scanf("%d", &numA);

    printf("Digite um numero B: \n");
    scanf("%d", &numB);

    printf("Numero A: %d\n", numA);
    printf("Numero B: %d\n", numB);

    printf("A soma do dobro de cada numero lido eh = %.2f \n", somaDoDobro(&numA, &numB));

    printf("\n-----------Depois da funcao--------\n");
    printf("Numero A: %d\n", numA);
    printf("Numero B: %d\n", numB);

    return 0;
}

float somaDoDobro(int *a, int *b)
{
    float soma;
    *a = *a * 2;
    *b = *b * 2;

    soma = *a + *b;

    return soma;
}