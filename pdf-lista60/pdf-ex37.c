#include <stdio.h>
int main()
{

    int x = 1000, altaOrdem, baixaOrdem, somaOrdem;

    while (x <= 9999)
    {

        altaOrdem = x / 100; // 1000 / 100 = 10

        baixaOrdem = x % 100; // 1000 % 100 =  00

        // printf("[%d,%d], ", altaOrdem, baixaOrdem);

        somaOrdem = altaOrdem + baixaOrdem;

        if (somaOrdem * somaOrdem == x)
        {
            printf("%d + %d = (%d)elevado a dois = ", altaOrdem, baixaOrdem, somaOrdem);
            printf("[%d]\n ", x);
        }

        x++;
    }

    return 0;
}