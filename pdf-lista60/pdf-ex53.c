#include <stdio.h>
int main()
{

    int num, x = 1, y, aux = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (x <= num)
    {

        for (y = 1; y <= x; y++)
        {
            printf("%d ", aux);
            aux++;
        }
        printf("\n");

        x++;
    }

    return 0;
}