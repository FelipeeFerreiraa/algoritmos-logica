#include <stdio.h>
int main()
{

    int array[50];

    for (int x = 0; x < 50; x++)
    {
        array[x] = (x + 5 * x) % (x + 1);
        printf("%d, ", array[x]);
    }

    return 0;
}