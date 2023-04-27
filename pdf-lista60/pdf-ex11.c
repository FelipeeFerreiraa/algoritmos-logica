#include <stdio.h>
int main()
{
    int num, x = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (x <= num)
    {

        printf("%d, ", x);

        x++;
    }

    return 0;
}