#include <stdio.h>
int main()
{
    float alt, peso;
    printf("Digite sua 'altura em metros' e seu 'peso em Kg': ");
    scanf("%f %f", &alt, &peso);

    if (alt < 1.2)
    {

        if (peso <= 60)
        {
            printf("Classificacao-A");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("Classificacao-D");
        }
        else if (peso > 90)
        {
            printf("Classificacao-G");
        }
    }

    if (alt >= 1.2 && alt <= 1.70)
    {
        if (peso <= 60)
        {
            printf("Classificacao-B");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("Classificacao-E");
        }
        else if (peso > 90)
        {
            printf("Classificacao-H");
        }
    }

    if (alt > 1.70)
    {
        if (peso <= 60)
        {
            printf("Classificacao-C");
        }
        else if (peso >= 60 && peso <= 90)
        {
            printf("Classificacao-F");
        }
        else if (peso > 90)
        {
            printf("Classificacao-I");
        }
    }

    return 0;
}