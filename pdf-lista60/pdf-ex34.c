#include <stdio.h>
int main()
{

    int x = 1, divisores, valor = 10;

    do
    {
        divisores = 0;
        valor = valor + 10;

        while (x <= 20)
        {

            if (valor % x == 0)
            {
                divisores++;
            }

            x++;
        }

    } while (divisores != 20);

    printf("valor: [%d]", valor);

    return 0;
}