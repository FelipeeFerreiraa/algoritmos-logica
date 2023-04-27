#include <stdio.h>
int main()
{
    int x = 1, y = 1, z;
    printf("\nusando while\n");
    while (x <= 100)
    {
        printf("%d, ", x);
        x++;
    }

    printf("\nusando doWhile\n");
    do
    {
        printf("%d, ", y);
        y++;
    } while (y <= 100);

    printf("\nusando for\n");
    for (z = 1; z <= 100; z++)
    {
        printf("%d, ", z);
    }
    return 0;
}