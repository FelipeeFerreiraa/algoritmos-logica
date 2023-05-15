#include <stdio.h>
int main()
{

    int a[5], x = 0, b[5];

    // lendo array A
    do
    {
        printf("\nDigite o %d elemento do Array A: ", x + 1);
        scanf("%d", &a[x]);
        x++;
    } while (x < 5);

    printf("\nArray A: \n");
    for (int z = 0; z < 5; z++)
    {
        printf("%d, ", a[z]);
    }

    printf("\nArray B: \n");
    for (int w = 0; w < 5; w++)
    {
        b[w] = a[w] * 3;
        printf("%d, ", b[w]);
    }

    return 0;
}