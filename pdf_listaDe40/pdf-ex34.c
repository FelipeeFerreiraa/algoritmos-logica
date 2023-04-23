#include <stdio.h>
int main()
{
    float nota, faltas;
    printf("Digite sua 'nota' (de 0 a 10) e o 'numero de faltas': ");
    scanf("%f %f", &nota, &faltas);

    if (faltas <= 20)
    {
        if (nota >= 0 && nota <= 3.9)
        {
            printf("CONCEITO-E");
        }
        else if (nota >= 4 && nota <= 4.9)
        {
            printf("CONCEITO-D");
        }
        else if (nota >= 5 && nota <= 7.4)
        {
            printf("CONCEITO-C");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("CONCEITO-B");
        }
        else if (nota >= 9.0 && nota <= 10)
        {
            printf("CONCEITO-A");
        }
    }
    else if (faltas > 20)
    {
        if (nota >= 0 && nota <= 3.9)
        {
            printf("CONCEITO-E");
        }
        else if (nota >= 4 && nota <= 4.9)
        {
            printf("CONCEITO-E");
        }
        else if (nota >= 5 && nota <= 7.4)
        {
            printf("CONCEITO-D");
        }
        else if (nota >= 7.5 && nota <= 8.9)
        {
            printf("CONCEITO-C");
        }
        else if (nota >= 9.0 && nota <= 10)
        {
            printf("CONCEITO-B");
        }
    }

    return 0;
}