#include <stdio.h>
int main()
{
    int num, aux = 1;

    printf("Digite um numero inteiro positivo:  ");
    scanf("%d", &num);

    printf("Divisores de %d\n", num);
    while (num >= aux)
    {

        if (num % aux == 0)
        {
            printf("%d, ", aux);
        }

        aux++;
    }
    return 0;
}