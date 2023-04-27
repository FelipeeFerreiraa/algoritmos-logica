#include <stdio.h>
int main()
{
    int x = 1, aux = 0, par = 0, impar = 0;
    do
    {
        printf("Digite um numero inteiro: (digite 1000 para finalizar)\n");
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            printf("eh PAR\n");
            par++;
        }
        else if (x % 2 != 0)
        {
            printf("N eh PAR\n");
            impar++;
        }

        aux = impar + par;
    } while (x != 1000);

    printf("Voce digitou %d numeros, desses numeros digitados %d sao pares, e %d sao impares", aux, par, impar);

    return 0;
}