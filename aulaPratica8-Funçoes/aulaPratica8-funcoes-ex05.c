#include <stdio.h>
#include <string.h>

void exibirConceito(int a);

// main
int main()
{
    int alunos, x = 0, mediaFinal;

    printf("Digite quantos alunos tem na sala: \n");
    scanf("%d", &alunos);

    do
    {
        printf("\nDigite a media do aluno %d: ", x + 1);
        scanf("%d", &mediaFinal);
        x++;

        exibirConceito(mediaFinal);
    } while (x != alunos);
}

// funcao
void exibirConceito(int a)
{
    if (a <= 39)
    {
        printf("Conceito-F !\n");
    }
    else if (a <= 59)
    {
        printf("Conceito-E !\n");
    }
    else if (a <= 69)
    {
        printf("Conceito-D !\n");
    }
    else if (a <= 79)
    {
        printf("Conceito-C !\n");
    }
    else if (a <= 89)
    {
        printf("Conceito-B !\n");
    }
    else if (a >= 90)
    {
        printf("Conceito-A !\n");
    }
}