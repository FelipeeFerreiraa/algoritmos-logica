#include <stdio.h>
int main()
{
    int x = 0;

    while (x <= 100000)
    {
        printf("%d, ", x);
        x = x + 1000;
    }

    return 0;
}