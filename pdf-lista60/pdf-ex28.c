#include <stdio.h>
int main()
{

    float numH = 1, x = 1, num, y = 1, fatorial = 1, fatorialFinal = 1;
    printf("Digite um numero: ");
    scanf("%f", &num);
    while (x <= num)
    {

        while (y <= x)
        {

            while (fatorial <= y)
            {

                fatorialFinal = fatorialFinal * y;

                printf("[y] %f, ", y);
                printf("[fatorial] %f, \n", fatorialFinal);

                numH = numH + (1 / fatorialFinal);

                fatorial++;
            }

            y++;
        }

        /*numH = numH + (1 / x);
        printf("%f, ", x);*/

        x++;
    }

    printf("\n\nResposta Final {[ %f ]}", numH);

    return 0;
}