#include <stdio.h>
int main()
{
    int num[5], x = 0, maior, menor, posicaoMaior, posicaoMenor;
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

        if (maior < num[y])
        {
            maior = num[y];
            posicaoMaior = y;
        }
        if (menor > num[y])
        {
            menor = num[y];
            posicaoMenor = y;
        }
        printf("%d, ", num[y]);
    }

    printf("\nO maior numero digitado eh = %d \n", maior);
    printf("O [maior] numero esta na posicao = %d \n", posicaoMaior);
    printf("O menor numero digitado eh = %d \n", menor);
    printf("O [menor] numero esta na posicao = %d \n", posicaoMenor);

    return 0;
}