#include <stdio.h>
int main()
{
    int num[5], x = 0, maior, menor, soma = 0;
    printf("Digite cinco numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &num[x]);
        x++;
    } while (x < 5);
    maior = num[0];
    menor = maior;
    printf("Array: \n");
    for (int y = 0; y < 5; y++)
    {
        soma = soma + num[y];
        if (maior < num[y])
        {
            maior = num[y];
        }
        if (menor > num[y])
        {
            menor = num[y];
        }
        printf("%d, ", num[y]);
    }
    printf("\nA soma dos numeros digitados eh = %d \n", soma);
    printf("O maior numero digitado eh = %d \n", maior);
    printf("O menor numero digitado eh = %d \n", menor);
    printf("A media dos numeros digitados eh = %d \n", soma / 5);

    return 0;
}