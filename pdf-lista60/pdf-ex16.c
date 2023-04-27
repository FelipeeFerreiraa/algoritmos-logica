#include <stdio.h>
int main()
{

    int x = 1, num;

    printf("Digite um numero inteiro positivo 'IMPAR': ");
    scanf("%d, ", &num);

    while (num >= x)
    {
        if (num % 2 != 0)
        {
            printf("%d, ", num);
        }
        num--;
    }

    return 0;
}