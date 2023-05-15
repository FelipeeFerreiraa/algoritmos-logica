#include <stdio.h>
int main()
{

    float num, maior = 0, menor = 0;

    do
    {
        printf("Digite um numero: ");
        scanf("%f", &num);

        printf("%f, ", num);
        if (num > maior)
        {
            maior = num;
        }
        else
        {
            menor = num;
        }
        if (num < 0)
        {
            break;
        }

    } while (num > 0);

    printf("O maior numero digitado eh = %f\n", maior);

    printf("O menor numero digitado eh = %f\n", menor);

    return 0;
}