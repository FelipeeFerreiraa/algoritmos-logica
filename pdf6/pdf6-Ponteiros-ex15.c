#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void verificandoArray(int *array, int num);

int main()
{
    int *teste, num;

    verificandoArray(teste, num);

    free(teste);

    return 0;
}

void verificandoArray(int *array, int num)
{
    int maior, menor, repetiuMaior = 1, repetiuMenor = 1;

    printf("Quantos numeros voce vai digitar: \n");
    scanf("%d", &num);

    array = malloc(num * sizeof(int));

    if (array == NULL)
    {
        printf("Erro na alocacao de memoria!!!!\n");
    }

    printf("Digite numeros para preencher o array: \n");
    for (int x = 0; x < num; x++)
    {
        printf("Numero %d: \n", x + 1);
        scanf("%d", array + x);
    }

    printf("Array: \n");
    for (int y = 0; y < num; y++)
    {
        printf("%d, ", *(array + y));
    }

    maior = *(array + 0);
    menor = *(array + 0);

    for (int x = 1; x < num; x++)
    {
        if (maior < *(array + x))
        {
            maior = *(array + x);
            repetiuMaior = 1; // reinicia a contagem caso precise
        }
        else if (maior == *(array + x))
        {
            repetiuMaior++;
        }

        if (menor > *(array + x))
        {
            menor = *(array + x);
            repetiuMenor = 1; // reinicia a contagem caso precise
        }
        else if (menor == *(array + x))
        {
            repetiuMenor++;
        }
    }

    printf("\nO maior valor do vetor eh= %d, repetiu %d vezes!!\n", maior, repetiuMaior);

    printf("O menor valor do vetor eh= %d, repetiu %d vezes!!\n", menor, repetiuMenor);
}