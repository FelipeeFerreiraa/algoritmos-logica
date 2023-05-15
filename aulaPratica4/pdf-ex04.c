#include <stdio.h>
int main()
{

    int a[5], x = 0, maior, menor, soma = 0;

    // lendo array A
    do
    {
        printf("\nDigite o %d elemento do Array A: ", x + 1);
        scanf("%d", &a[x]);
        x++;
    } while (x < 5);

    printf("\nArray A: \n");
    maior = a[0];
    menor = maior;
    for (int z = 0; z < 5; z++)
    {

        if (maior < a[z])
        {
            maior = a[z];
        }
        if (menor > a[z])
        {
            menor = a[z];
        }
        soma = soma + a[z];
        printf("%d, ", a[z]);
    }

    printf("\n O maior valor digitado foi = %d, e o menor foi = %d \n", maior, menor);
    printf("A media dos valores digitados eh = %d", soma / 5);

    return 0;
}