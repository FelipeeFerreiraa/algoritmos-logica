#include <stdio.h>
int main()
{
    int a[6] = {1, 0, 5, -2, -5, 7}, soma = 0, x;

    soma = a[0] + a[1] + a[5];

    printf("A soma eh = %d\n", soma);

    a[4] = 100;

    for (x = 0; x < 6; x++)
    {
        printf("%d, ", a[x]);
    }
    return 0;
}