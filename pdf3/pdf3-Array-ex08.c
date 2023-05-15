#include <stdio.h>
int main()
{
    int vetor[6], x = 0;

    printf("Enter six numbers: \n");

    do
    {
        printf("Number %d: ", x + 1);
        scanf("%d", &vetor[x]);

        x++;
    } while (x < 6);

    printf("\nArray normal!\n");
    for (int z = 0; z < 6; z++)
    {
        printf("%d, ", vetor[z]);
    }

    printf("\nArray invertido!\n");
    for (int y = 5; y >= 0; y--)
    {
        printf("%d, ", vetor[y]);
    }

    return 0;
}