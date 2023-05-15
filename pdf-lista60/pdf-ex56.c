#include <stdio.h>
int main()
{

    float soma = 0;
    int x, y, divisores;

    

    for (x =1; x < 200; x++) //mudar o 200 para (dois milhoes 2.000.000) 
    {                        // mas da mts numeros e trava td meu pc
        divisores = 1;
        for (y = 2; y < x; y++)
        {
            if (x % y == 0)
            {
                divisores = 0; // se 6%2 == 0 n eh primo
            }
        }
        if (divisores == 1)
        {
            soma = soma + x;
            printf("%d, ", x); //eh primo
        }
    }

    printf("\nA soma dos numeros primos entre 1 e 2000000 eh = %.2f", soma);

    return 0;
}