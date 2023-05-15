#include <stdio.h>
int main()
{

    int vetor[5], x = 0, codigo;

    printf("Digite 5 numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &vetor[x]);
        x++;
    } while (x < 5);

    printf("Escolha um codigo: \n");
    do
    {
        printf("\n\n[0] Finalizar programa!\n");
        printf("[1] Vetor direto!\n");
        printf("[2] Vetor invertido!\n");
        scanf("%d", &codigo);

        if (codigo == 1)
        {
            printf("\n[1] Vetor direto!\n");
            for (int y = 0; y < 5; y++)
            {
                printf("%d, ", vetor[y]);
            }
        }

        if (codigo == 2)
        {
            printf("\n[2] Vetor invertido!\n");
            for (int z = 5; z > 0; z--)
            {
                printf("%d, ", vetor[z]);
            }
        }

        if (codigo > 2)
        {
            printf("\nCodigo Invalido!\n");
            codigo = 5;
        }

    } while (codigo != 0);

    printf("\nPrograma Finalizado!!");

    return 0;
}