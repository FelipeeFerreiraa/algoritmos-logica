#include <stdio.h>
#include <string.h>

int fatorialDuplo(int impar);

int main()
{
    int impar;
    do
    {
        printf("Digite um numero inteiro positivo impar: \n");
        scanf("%d", &impar);
    } while (impar % 2 == 0);

    printf("O fatorial duplo de %d eh %d\n", impar, fatorialDuplo(impar));

    return 0;
}

int fatorialDuplo(int impar)
{
    int fat = 1;
    for (int x = impar; x > 1; x--)
    {
        if (x % 2 != 0)
        {
            fat = fat * x;
        }
    }

    return fat;
}