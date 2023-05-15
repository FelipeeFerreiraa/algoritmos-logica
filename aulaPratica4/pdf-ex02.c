#include <stdio.h>
int main()
{

    int a[5], x = 0, menor, posicao;

    // lendo vetor
    do
    {
        printf("\nDigite o %d elemento do vetor A: ", x + 1);
        scanf("%d", &a[x]);
        x++;
    } while (x < 5);

    menor = a[0];
    for (int y = 0; y < 5; y++)
    {

        if (a[y] < menor)
        {
            posicao = y;
            menor = a[y];
        }
    }

    a[posicao] = a[0];
    a[0] = menor;
    printf("\nO menor elemento deste arranjo esta na posicao: %d\n", posicao);
    printf("Novo vetor: ");

    for (int z = 0; z < 5; z++)
    {
        printf("%d, ", a[z]);
    }

    return 0;
}