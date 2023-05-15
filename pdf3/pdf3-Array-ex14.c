#include <stdio.h>
int main()
{

    int num[10], x = 0;

    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &num[x]);
        x++;
    } while (x < 10);

    printf("Array: \n");
    for (int y = 0; y < 10; y++)
    {
        printf("%d, ", num[y]);

        for (int z = y + 1; z < 10; z++)
        {

            if (num[y] == num[z])
            {

                // printf("Voce digitou numeros repetidosa!!!");
                printf("[%d]", num[y]);
            }
        }
    }

    return 0;
}