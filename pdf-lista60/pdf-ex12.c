
#include <stdio.h>
int main()
{
    int num, x = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (num >= x)
    {

        printf("%d, ", num);

        num--;
    }

    return 0;
}
