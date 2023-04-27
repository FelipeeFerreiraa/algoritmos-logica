#include <stdio.h>
int main()
{

    int x = 1;
    printf("Os multiplos de 3 sao :");
    while (x < 100)
    {
        if (x % 3 == 0)
        {
            printf(" [%d] ", x);
        }

        x++;
    }
    

    return 0;
}