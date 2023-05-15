#include <stdio.h>
int main()
{
    int val1, val2, soma = 0;

    printf("\nDefina o valor inicial do intervalo, digite um numero: \n");
    scanf("%d", &val1);
    printf("Defina o valor final do intervalo, digite um numero: \n");
    scanf("%d", &val2);

    if (val1 >= val2)
    {
        printf("Intervalo de valores invalido \n");
    }
    while (val1 <= val2)
    {

        if (val1 % 2 != 0)
        {
            soma = soma + val1;
           
        }

        val1++;
    }

     printf("A soma dos impares neste intervalo eh = %d", soma);

        return 0;
}