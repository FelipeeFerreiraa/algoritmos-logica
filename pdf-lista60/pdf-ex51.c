#include <stdio.h>
int main()
{
    int ano = 1995, salario = 2000, aumento = salario * 0.015;

    while (ano <= 2023)
    {
        if (ano == 1996)
        {
            salario = salario + aumento;
        }

        if (ano >= 1997)
        {
            aumento = aumento * 2;
            salario = salario + aumento;
        }

        printf("no ano %d recebia %d\n", ano, salario);
        ano++;
    }

    return 0;
}