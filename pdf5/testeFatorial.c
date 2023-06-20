#include <stdio.h>
#include <string.h>

int main()
{
    int num, fat=1;
    printf("Digite um numero maior que zero: \n");
    scanf("%d", &num);

    for (int x = num; x >1; x--)
    {
        fat = fat * x;
    }

    printf("O fatorial de %d eh %d\n", num, fat);
    return 0;
}