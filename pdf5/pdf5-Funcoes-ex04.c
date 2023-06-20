#include <stdio.h>
#include <string.h>

int mediaDoAluno(int notas[3], char letra);

int main()
{
    int notas[3];
    char letra;
    float media;

    printf("Digite as tres notas do aluno: \n");
    for (int x = 0; x < 3; x++)
    {
        printf("Nota %d: ", x + 1);
        scanf("%d", &notas[x]);
    }

    printf("Digite [A] para calcular a media aritmetica\nDigite [P] para calcular a media ponderada(5,3,2) \n");
    scanf(" %c", &letra);

    media = mediaDoAluno(notas, letra);

    printf("Media do aluno: %.2f \n", media);

    return 0;
}

int mediaDoAluno(int notas[3], char letra)
{
    int soma = 0;
    float media;

    if (letra == 'A')
    {
        for (int x = 0; x < 3; x++)
        {
            soma = soma + notas[x];
        }

        media = soma / 3;
    }

    if (letra == 'P')
    {
        for (int x = 0; x < 3; x++)
        {
            soma = (notas[0] * 5) + (notas[1] * 3) + (notas[2] * 2);
        }

        media = soma / 3;
    }

    return media;
}