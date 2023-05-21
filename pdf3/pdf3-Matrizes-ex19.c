#include <stdio.h>
#include <strings.h>
int main()
{

    int matricula[5], mediaProva[5], mediaTrabalho[5], notaFinal[5], matriz[5][4], maiorNotaF = 0, posicaoMaiorNf, soma = 0;

    // matricula
    printf("\nDigite a matricula dos alunos: \n");
    for (int x = 0; x < 5; x++)
    {
        printf("Aluno %d: \n", x + 1);
        scanf("%d", &matricula[x]);
    }

    // media das provas
    printf("\nDigite a media das provas dos alunos: \n");
    for (int x = 0; x < 5; x++)
    {
        printf("Aluno %d: \n", x + 1);
        scanf("%d", &mediaProva[x]);
    }

    // media do trabalho
    printf("\nDigite a media dos trabalhos dos alunos: \n");
    for (int x = 0; x < 5; x++)
    {
        printf("Aluno %d: \n", x + 1);
        scanf("%d", &mediaTrabalho[x]);
    }

    // nota final
    for (int x = 0; x < 5; x++)
    {
        notaFinal[x] = mediaProva[x] + mediaTrabalho[x];

        maiorNotaF = notaFinal[0];

        soma = soma + notaFinal[x];
    }

    // colocando os dados na matriz
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            matriz[x][0] = matricula[x];
            matriz[x][1] = mediaProva[x];
            matriz[x][2] = mediaTrabalho[x];
            matriz[x][3] = notaFinal[x];
        }

        if (maiorNotaF < notaFinal[x])
        {
            maiorNotaF = notaFinal[x];
            posicaoMaiorNf = x;
        }
    }

    // exibindo matriz
    printf("Matriz: \n");
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            printf("   %d   ", matriz[x][y]);
        }
        printf("\n");
    }

    printf("\nA matricula do aluno q obteve a maior nota final foi = %d \n", matricula[posicaoMaiorNf]);

    printf("\nA media aritmetica das notas finais eh = %d \n", soma / 5);

    return 0;
}