#include <stdio.h>
int main()
{
    int num, x = 0;
    printf("Digite um numero inteiro positivo 'PAR': ");
    scanf("%d", &num);

    while (num >= x)
    {

        if (num % 2 == 0)
        {
            printf("%d, ", num);
        }

        num--;
    }

    return 0;
}