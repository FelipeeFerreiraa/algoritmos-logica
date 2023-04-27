#include <stdio.h>
int main()
{

    float x = 1, y = 1;
    float soma = 0;

    while (x <= 99)
    {

        while (y <= 50)
        {

            if (x >= y)
            {
                soma = (x / y) + soma;
            }

            y++;
            x = x + 2;
            printf("x=[%f], ", x);
            printf("y=[%f], ", y);
            printf("\nA soma eh = %f ", soma);
        }
    }

    printf("\nA soma eh = %f ", soma);

    return 0;
}