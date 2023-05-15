#include <stdio.h>
int main()
{

    int A[11];
    int x = 0, temp, n=11;

    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &A[x]);
        x++;
    } while (x < 11);


    printf("Vetor A:\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", A[i]);
    }

    // ordena o vetor A em ordem decrescente a partir do sexto elemento
    for (int i = n - 1; i >= 5; i--)
    {
        for (int j = 6; j <= i; j++)
        {
            if (A[j - 1] < A[j])
            {
                temp = A[j - 1];
                A[j - 1] = A[j];
                A[j] = temp;
            }
        }
    }



    // imprime o vetor A ordenado
    printf("\n\nVetor A ordenado:\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}