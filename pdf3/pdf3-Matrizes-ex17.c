#include <stdio.h>
#include <string.h>
int main()
{

    int notas[10][3];
    int i = 1, piorProva1 = 0, piorProva2 = 0, piorProva3 = 0;

    // lendo notas
    printf("Digite as notas dos alunos nas tres provas: \n");
    for (int x = 0; x < 10; x++)
    {
        printf("Aluno %d: \n", i);
        i++;
        for (int y = 0; y < 3; y++)
        {
            scanf("%d", &notas[x][y]);
        }
    }

    // exibindo a matriz
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d, ", notas[x][y]);
        }
        printf("\n");
    }

    // verificando notas
    for (int x = 0; x < 10; x++)
    {

        if (notas[x][0] < notas[x][1] && notas[x][0] < notas[x][2])
        {
            piorProva1++;
        }
        else if (notas[x][1] < notas[x][0] && notas[x][1] < notas[x][2])
        {
            piorProva2++;
        }
        else if (notas[x][2] < notas[x][1] && notas[x][2] < notas[x][0])
        {
            piorProva3++;
        }
    }

    // Exibindo os resultados
    printf("Numero de alunos com pior nota na prova 1: %d\n", piorProva1);
    printf("Numero de alunos com pior nota na prova 2: %d\n", piorProva2);
    printf("Numero de alunos com pior nota na prova 3: %d\n", piorProva3);

    return 0;
}