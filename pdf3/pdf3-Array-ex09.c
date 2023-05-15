#include <stdio.h>
int main()
{

    int vetor[6], x = 0, num;
    printf("Enter six even numbers: \n");

    do
    {
        printf("Number %d: ", x + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
        {
            vetor[x] = num;
            x++;
        }

        
    } while (x < 6);

    printf("\nArray normal\n");
    for (int z = 0; z < 6; z++)
    {
        printf("%d, ", vetor[z]);
    }

    printf("\nArray Invertido\n");
    for (int y = 6; y >= 0; y--)
    {
        printf("%d, ", vetor[y]);
    }

    return 0;
}