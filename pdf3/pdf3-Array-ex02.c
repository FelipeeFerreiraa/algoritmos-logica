#include <stdio.h>
int main()
{
    int num[6], x = 0, y;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num[x]);

        x++;
    } while (x < 6);

    for (y = 0; y < 6; y++)
    {
        printf("%d, ", num[y]);
    }

    return 0;
}