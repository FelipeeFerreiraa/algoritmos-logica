#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    float val1, val2, val3, val4, val5;
    int acertos = 0;

    printf("[1] Qual eh a soma de 56 + 98 = \n[2] Qual eh a soma de 98 + 42 = \n[3] Qual eh a soma de 95 + 32 = \n[4] Qual eh a soma de 12 + 84 = \n[5] Qual eh a soma de 77 + 36 = \n");

    scanf("%f", &val1);
    scanf("%f", &val2);
    scanf("%f", &val3);
    scanf("%f", &val4);
    scanf("%f", &val5);

    if (val1 == 154)
    {
        printf("Resposta da questao 1, CORRETA!\n");
        acertos++;
    }
    else
    {
        printf("Resposta da questao 1, ERRADA!\n");
    }

    if (val2 == 140)
    {
        printf("Resposta da questao 2, CORRETA!\n");
        acertos++;
    }
    else
    {
        printf("Resposta da questao 2, ERRADA!\n");
    }
    if (val3 == 127)
    {
        printf("Resposta da questao 3, CORRETA!\n");
        acertos++;
    }
    else
    {
        printf("Resposta da questao 3, ERRADA!\n");
    }

    if (val4 == 96)
    {
        printf("Resposta da questao 4, CORRETA!\n");
        acertos++;
    }
    else
    {
        printf("Resposta da questao 4, ERRADA!\n");
    }

    if (val5 == 113)
    {
        printf("Resposta da questao 5, CORRETA!\n");
        acertos++;
    }
    else
    {
        printf("Resposta da questao 5, ERRADA!\n");
    }

    printf("O numero total de acertos eh = %d ", acertos);

    return 0;
}