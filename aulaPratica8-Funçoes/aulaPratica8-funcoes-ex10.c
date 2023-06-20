#include <stdio.h>
#include <string.h>

void lerNotas();

// main
int main()
{

    lerNotas();

    return 0;
}

// funçao
void lerNotas()
{
    int x = 0, notas;
    int aprovados = 0, soma = 0;

    do
    {
        printf("Digite a 'nota' do aluno %d: ", x + 1);
        scanf("%d", &notas);
        if (notas >= 6)
        {
            soma = soma + notas;
            aprovados++;
        }

        float media;

        media = soma / aprovados;
        printf("A nota media dos alunos aprovados eh = %.2f\n\n", media);

        x++;
    } while (notas > 0);
}
