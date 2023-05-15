#include <stdio.h>
int main()
{

    int soma = 0, x = 1, soma2 = 0, y = 1;

    while (x <= 10)
    {

        soma = soma + (x * x);

        x++;
    }

    while (y <= 10)
    {

        soma2 = soma2 + y;

        y++;
    }

    soma2 = soma2 * soma2;

    printf("A soma dos quadrados dos dez primeiros numeros eh = %d \n", soma);

    printf("O quadrado da soma dos dez primeiros numeros naturais eh %d \n", (soma2));

    printf("A diferenca entre a soma dos quadrados dos dez primeiros numeros naturais e o quadrado da soam eh %d - %d = %d\n", soma2, soma,(soma2 - soma));

    return 0;
}