#include <stdio.h>
int main()
{
    int num, x = 0;
    printf("Digite um numero inteiro positivo 'PAR': ");
    scanf("%d", &num);

    while (x <= num)
    {

        if (x % 2 == 0)
        {
            printf("%d, ", x);
        }

        x++;
    }

    return 0;
}