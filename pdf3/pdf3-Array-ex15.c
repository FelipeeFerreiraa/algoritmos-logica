#include <stdio.h>
int main()
{

    int vetor[20], x = 0, teste;
    printf("Digite vinte numeros: \n");

    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 20);

    printf("\nArray: \n");
    // percorrendo
    for (int y = 0; y < 20; y++)
    {

        printf("%d, ", vetor[y]);
    }

    printf("\nArray sem numeros repetidos: \n");
    // achando numero igual
    for (int y = 0; y < 20; y++)
    {
        teste = 0;
        for (int z = 0; z < y; z++)
        {

            if (vetor[y] == vetor[z]) // verifica se os nmrs sao iguais
            {
                teste = 1; // se tiver numr igual
                break;
            }
        }

        if (teste == 0)
        {
            printf("[%d], ", vetor[y]);
        }
    }

    return 0;
}
