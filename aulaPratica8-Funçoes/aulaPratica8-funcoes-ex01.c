#include <stdio.h>
#include <string.h>

typedef struct sala
{
    int nota1, nota2, nota3;
    char letra;
} sala;

int receberNotas(int a, int b, int c, char letra);

// main
int main()
{

    // lendo o numero de alunos
    int alunos, x = 0;
    printf("Digite quantos alunos tem na sala: \n");
    scanf("%d", &alunos);

    sala turma1[alunos];
    do
    {
        printf("Digite as tres notas do aluno %d: \n", x + 1);
        scanf("%d %d %d", &turma1[x].nota1, &turma1[x].nota2, &turma1[x].nota3);

        printf("Digite (A) para media aritmetica ou (P) para media ponderada: \n");
        scanf(" %c", &turma1[x].letra);
        x++;
    } while (x < alunos);

    for (int y = 0; y < alunos; y++)
    {
        printf("A nota final do aluno %d eh = %d \n", y + 1, receberNotas(turma1[y].nota1, turma1[y].nota2, turma1[y].nota3, turma1[y].letra));
    }

    return 0;
}

// funçao
int receberNotas(int a, int b, int c, char letra)
{
    int notaFinal = 0;
    if (letra == 'A')
    {
        notaFinal = (a + b + c) / 3;
    }
    if (letra == 'P')
    {
        notaFinal = ((a * 5) + (b * 3) + (c * 2)) / 3;
    }

    return notaFinal;
}