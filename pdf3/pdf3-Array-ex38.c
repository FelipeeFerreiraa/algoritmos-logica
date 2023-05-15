#include <stdio.h>
int main()
{

    float num[10], maior;
    int x=0;

    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%f", &num[x]);
        x++;
    } while (x < 10);



    // verificando elementos  do vetor
    for (int y = 0; y < 10; y++)
    {
        for (int w = y + 1; w < 10; w++)
        {
            if (num[y] > num[w])
            {
                maior = num[y];
                num[y] = num[w];
                num[w] = maior;
            }
        }
    }

    // exibindo vetor em ordem crescente
    printf("\nVetor ordenado: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f, ", num[i]);
    }

    return 0;
}