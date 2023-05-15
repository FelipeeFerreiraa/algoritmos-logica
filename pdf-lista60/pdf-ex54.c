
#include <stdio.h>
int main()
{
    int num, x = 1, divisores = 0;

    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    } while (num < 1);

    while (x <= num)
    {
        if (num % x == 0)
        {
            divisores++;
        }
        x++;
    }

    if (divisores > 2 || divisores == 1)
    {
        printf("%d nao eh primo\n", num);
    }
    else if (divisores == 2)
    {
        printf("%d eh primo!\n", num);
    }

    return 0;
}
