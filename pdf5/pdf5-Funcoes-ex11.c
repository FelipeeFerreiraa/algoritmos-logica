#include <stdio.h>
#include <string.h>

int superFatorial(int num);

int main()
{

    int num;

    do
    {
        printf("Digite um numero positivo: \n");
        scanf("%d", &num);
    } while (num < 0);

    printf("O super Fatorial de %d eh = %d\n", num, superFatorial(num));

    return 0;
}

int superFatorial(int num)
{

    int fat = 1, superFatorial = 1;

    for (int x = num; x > 1; x--)
    {
        fat = fat * x;

        if (x < num)
        {
            superFatorial = superFatorial * fat;
        }
    }

        return superFatorial;
}