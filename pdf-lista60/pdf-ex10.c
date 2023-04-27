#include <stdio.h>
int main()
{

    int x = 1, aux = 0, y = 0;

    while (x)
    {

        if (x % 2 == 0)
        {
            printf("%d, ", x);
            aux = x + aux;
            y++;
        }

        x++;

        if (y == 50)
        {
            break;
        }
    }

    printf("A soma dos 50 primeiros numeros pares eh = %d", aux);

    return 0;
}