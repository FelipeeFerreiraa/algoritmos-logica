#include <stdio.h>
#include <string.h>
int main()
{

    char matriz[5][10], resultado[5][10] = {0};
    char gabarito[10];
    int i = 0, j = 0;
    setbuf(stdin, NULL);
    printf("Digite os 10 gabaritos dos 5 alunos: \n");

    // lendo matriz
    for (int x = 0; x < 5; x++)
    {
        printf("Respostas do aluno %d: \n", i + 1);
        i++;

        for (int y = 0; y < 10; y++)     // 20 pq o '%c' tbm le a tecla
        {                                // enter "A (ENTER) B
            scanf(" %c", &matriz[x][y]); //(ENTER)..."
        }
    }
    setbuf(stdin, NULL);
    // lendo o gabarito
    printf("Digite os 10 Gabaritos Correto da prova (a,b,c,d) ");
    for (int w = 0; w < 10; w++)
    {
        scanf(" %c", &gabarito[w]);
    }

    // verificando gabaritos
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            if (matriz[x][y] == gabarito[y])
            {
                resultado[x][y] = 1;
            }
            else if (matriz[x][y] == '\n' && gabarito[y] == '\n')
            {
                resultado[x][y] = 2;
            }
            else
            {
                resultado[x][y] = 0;
            }
        }
    }

    // exibindo gabarito
    printf("Gabarito: \n");
    for (int x = 0; x < 10; x++)
    {
        printf(" %c", gabarito[x]);
    }

    // exibindo resultados
    printf("\nResultados: (1 esta certo, 0 esta errado) \n");
    for (int x = 0; x < 5; x++)
    {
        printf("Aluno %d: ", j + 1);
        j++;
        for (int y = 0; y < 10; y++)
        {
            printf("%d, ", resultado[x][y]);
        }
        printf("\n");
    }

    return 0;
}