#include <stdio.h>
int main()
{

    int x = 2, ant = 0, prox = 1, soma = 0, aux = 0;
    // printf("Digite um numero inteiro positivo: \n");
    // scanf("%d", &num);

    while (x < 4000000)
    {

        soma = ant + prox;

        // printf(" [%d] ", soma);

        if (soma % 2 == 0)
        {
            aux = soma + aux;
            if (soma <= 4000000)
            {
                
                printf(" [%d] ", soma);
            }
        }

        ant = prox;
        prox = soma;

        if (soma >= 4000000)
        {
            break;
        }

        x++;
    }

    printf("\nTermos de valor par da sequencia de Fibonacci cujos valores nao ultrapassem quatro milhoes somados = %d", aux);

    return 0;
}