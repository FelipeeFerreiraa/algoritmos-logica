#include <stdio.h>
#include <string.h>

int main()
{

    float array[10];

    printf("Digite 10 numeros para preencher o array\n");
    for (int x = 0; x < 10; x++)
    {
        printf("Digite o numero %d: \n", x + 1);
        scanf("%f", &array[x]);
    }

    printf("\nOs numeros fornecidos sao: \n");
    for (int x = 0; x < 10; x++)
    {
        printf("[%f], ", array[x]);
    }

    printf("\n\nO endereco de memoria de cada numero fornecido eh: \n");
    for (int x = 0; x < 10; x++)
    {
        printf("[%d], ", &array[x]);
    }

    return 0;
}