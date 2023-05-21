#include <stdio.h>
#include <string.h>
int main()
{

    char prova[3][10], gabarito[10];
    int i = 1, matricula[3], resultado[3][10] = {0}, soma[3] = {0};

    // lendo a prova
    printf("Digite as respostas dos alunos: \n");
    for (int x = 0; x < 3; x++)
    {
        printf("Numero da matricula, aluno %d: \n", i);
        scanf("%d", &matricula[x]);
        printf("Respostas aluno %d: \n", i);
        i++;
        for (int y = 0; y < 10; y++)
        {
            scanf(" %c", &prova[x][y]);
        }
    }

    // lendo o gabarito
    printf("Digite o gabarito da prova: \n");
    for (int w = 0; w < 10; w++)
    {
        scanf(" %c", &gabarito[w]);
    }

    // comparando
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            if (prova[x][y] == gabarito[y])
            {
                resultado[x][y] = 1;
            }
            else
            {
                resultado[x][y] = 0;
            }
        }
    }

    // exibindo o gabarito
    printf("Gabarito: \n");
    for (int x = 0; x < 10; x++)
    {
        printf(" %c", gabarito[x]);
    }

    // exibindo resultados
    i = 1;
    printf("\nResultados: (1 esta certo, 0 esta errado) \n");
    for (int x = 0; x < 3; x++)
    {
        printf("Aluno %d: ", i);
        i++;
        for (int y = 0; y < 10; y++)
        {
            printf("%d, ", resultado[x][y]);
        }
        printf("\n");
    }

    // somando notas
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            soma[x] = soma[x] + resultado[x][y];
        }
    }

    // exibindo resultados
    i = 1;
    for (int x = 0; x < 3; x++)
    {

        printf("\n-----Aluno %d: \n", i);
        i++;
        printf("Matricula: %d \n", matricula[x]);
        printf("Respostas: \n");

        for (int w = 0; w < 10; w++)
        {
            printf(" %c", prova[x][w]);
        }

        printf("\nNota: %d \n", soma[x]);
        if (soma[x] >= 7)
        {
            printf("Aprovado! \n");
        }
        else
        {
            printf("Reprovado! \n");
        }
    }

    return 0;
}