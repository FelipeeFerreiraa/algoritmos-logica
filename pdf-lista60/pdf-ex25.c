#include <stdio.h>
int main()
{
    int x = 1, aux = 0;

    while (x <= 1000)
    {

        if (x % 3 == 0 && x % 5 == 0)
        {
            printf("%d, ", x);
            aux = x + aux;
        }

        x++;
    }

    printf("\nA soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh = [%d]", aux);

    return 0;
}