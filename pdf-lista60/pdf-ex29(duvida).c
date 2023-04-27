#include <stdio.h>
int main()
{

    int x = 0, y = 2;
    float soma = 0, fatorial = 1;

    while (x < 5)
    {

        if (x > 1)
        {
            fatorial = fatorial * (2 * x) * (2 * x - 1);
            printf("[%d], ", x);
        }
        soma = y + x / fatorial;

        x++;
    }

    printf("A Soma dos valores da serie para 5 termos eh: = %f", soma);

    return 0;
}