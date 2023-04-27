#include <stdio.h>
int main()
{

    int num, x = 1, aux = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (x)
    {

        if (x % 2 != 0)
        {
            printf("%d, ", x);
            aux++;
        }

        x++;

        if (aux == num)
        {
            break;
        }
    }

    return 0;
}