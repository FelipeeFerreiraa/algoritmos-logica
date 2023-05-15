#include <stdio.h>
int main()
{

    int num[10], x = 0, negativos = 0, soma = 0;

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

        if (num[y] < 0)
        {
            negativos++;
        }
        if (num[y] > 0)
        {
            soma = soma + num[y];
        }
    }

    printf("\nVoce digitou [%d] numeros negativos!\n", negativos);
    printf("A soma dos numeros positivos digitados eh = %d\n", soma);

    return 0;
}