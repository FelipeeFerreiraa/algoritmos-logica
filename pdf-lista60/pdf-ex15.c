#include <stdio.h>
int main()
{

    int x = 1, num;

    printf("Digite um numero inteiro positivo 'IMPAR': ");
    scanf("%d, ", &num);

    while (x <= num)
    {
        if (x % 2 != 0)
        {
            printf("%d, ", x);
        }
        x++;
    }

    return 0;
}