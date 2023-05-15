#include <stdio.h>
int main()
{

    float aluno[10][2], maior = 0, menor = 3, nmrAlunoMenor, nmrAlunoMaior;

    // int x = 0;

    // lendo alunos
    for (int x = 0; x < 10; x++)
    {

        printf("Aluno %d: Digite o 'numero' e a 'altura' \n", x + 1);
        scanf("%f %f", &aluno[x][0], &aluno[x][1]);
                 // 0=primeira coluna / 1=segunda coluna
    }

    // exibindo tabela de alunos
    printf("'numero' e a 'altura' \n");
    for (int w = 0; w < 10; w++)
    {
        for (int z = 0; z < 2; z++)
        {
            printf("   %.2f   ", aluno[w][z]);
        }
        printf("\n");
    }

    // verificando a altura
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (aluno[i][1] > maior)
            {
                maior = aluno[i][1];
                nmrAlunoMaior = aluno[i][0];
            }

            if (aluno[i][1] < menor)
            {
                menor = aluno[i][1];
                nmrAlunoMenor = aluno[i][0];
            }
        }
    }

    printf("\nO aluno mais baixo eh = %.2f", menor);
    printf("O numero do aluno mais baixo eh = %.2f", nmrAlunoMenor);
    printf("\nO aluno mais alto eh = %.2f", maior);
    printf("O numero do aluno mais alto eh = %.2f", nmrAlunoMaior);

    return 0;
}