#include <stdio.h>
int main()
{

    int num, x = 2, ant = 0, prox = 1, soma = 0;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &num);

    while (x < num)
    {

        soma = ant + prox;

        printf(" [%d] ", soma);

        ant = prox;
        prox = soma;

        if (soma >= num)
        {
            break;
        }

        x++;
    }

    return 0;
}