#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a nota do trabalho de laboratorio, da avaliacao semestral e do exame final, respectivamente: (sabendo q as notas sao de 0 a 10pts) ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    if (nota1 >= 0 && nota1 <= 10)
    {
        if (nota2 >= 0 && nota2 <= 10)
        {
            if (nota3 >= 0 && nota3 <= 10)
            {
                nota1 = (nota1 * 2) / 10;
                nota2 = (nota2 * 3) / 10;
                nota3 = (nota3 * 5) / 10;
                media = nota1 + nota2 + nota3;
            }
            else
            {
                printf("NOTA 3 INVALIDA!\n");
            }
        }
        else
        {
            printf("NOTA 2 INVALIDA!\n");
        }
    }
    else
    {
        printf("NOTA 1 INVALIDA!\n");
    }

    if (media >= 0 && media <= 2.9)
    {
        printf("REPROVADO!!!!");
    }
    else if (media >= 3 && media <= 4.9)
    {
        printf("RECUPERACAO!!!");
    }
    else
    {
        printf("APROVADO!!!!");
    }
    return 0;
}