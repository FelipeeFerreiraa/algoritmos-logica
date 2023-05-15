#include <stdio.h>
int main()
{

    int x = 0, y = 0, v1[10], v2[10], vInter[10];

    // lendo array v1
    printf("Digite dez numeros para vetor1: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &v1[x]);
        x++;
    } while (x < 10);

    // lendo array v2
    printf("Digite dez numeros para vetor2: \n");
    do
    {
        printf("Numero %d: ", y + 1);
        scanf("%d", &v2[y]);
        y++;
    } while (y < 10);

    // exibindo o arrayV1
    printf("\nArray V1: \n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d, ", v1[c]);
    }

    // exibindo o arrayV2
    printf("\nArray V1: \n");
    for (int f = 0; f < 10; f++)
    {
        printf("%d, ", v2[f]);
    }

    // Interseccao
    printf("\nArray interseccao: \n");
    for (int w = 0; w < 10; w++)
    {
        for (int z = 0; z + 1 < 11; z++)
        {
            if (v1[w] == v2[z])
            {
                vInter[w] = v1[w];
                printf("[%d], ", vInter[w]);
            }
        }
    }

    return 0;
}