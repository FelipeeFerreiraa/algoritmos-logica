#include <stdio.h>
int main()
{

    int val, x, c = 0, par = 0;

    printf("Quantos valores deseja ler? ");
    scanf("%d", &x);

    while (c < x)
    {
        printf("Digite um numero (inteiro):  ");
        scanf("%d", &val);
        if (val % 2 == 0)
        {
            par++;
        }
        c++;
    }

    printf("Voce digitou %d numeros pares e %d numeros impares.", par, x - par);

    return 0;
}