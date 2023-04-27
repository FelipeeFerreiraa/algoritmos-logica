#include <stdio.h>
int main()
{
    int num, x = 1, y = 1, z = 1, soma1 = 0, soma2 = 0, soma3 = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (x <= num)
    {
        soma1 = soma1 + x;

        x++;
    }

    while (y <= num)
    {
        soma2 = soma2 + y;

        y++;
    }

    while (z <= num)
    {
        soma3 = soma3 + z;

        z = z + 2;
    }

    printf("[Sequencia-1] A soma eh = [%d]\n", soma1);

    printf("[Sequencia-2] A soma eh = [%d]\n", soma2 + (2 * num - 1));

    printf("[Sequencia-3] A soma eh = [%d]\n", soma3 + (2 * num - 1));

    return 0;
}