#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int tam, *memoria, escolha, escolhaPosicao, num;

    printf("Digite um numero: \n");
    scanf("%d", &tam);

    memoria = malloc(tam * sizeof(int));

    for (int x = 0; x < tam; x++)
    {
        *(memoria + x) = 0;
    }

    do
    {
        printf("Escolha: \n[1] Inserir um valor\n[2] Consultar um valor\n[0] Sair\n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            printf("Em qual posicao deseja inserir um valor: \n");
            printf("O vetor possui %d posicoes!\n", tam);
            scanf("%d", &escolhaPosicao);

            printf("Qual numero deseja inserir: \n");
            scanf("%d", &num);

            *(memoria + escolhaPosicao) = num;
            printf("Numero adicionado!\n");
        }
        else if (escolha == 2)
        {
            printf("Qual posicao deseja consultar o valor: \n");
            printf("O vetor possui %d posicoes!\n", tam);
            scanf("%d", &escolhaPosicao);

            printf("Indice: %d, valor: %d\n", escolhaPosicao, *(memoria + escolhaPosicao));
            printf("Numero  consultado com sucesso!!\n");
        }

        if (escolha == 0)
        {
            printf("ThanksBro!\n");
            break;
        }
    } while (1);

    return 0;
}