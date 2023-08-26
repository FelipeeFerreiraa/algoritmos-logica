#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct jogo
{
    int p1, p2, p3, p4;
} jogo;

int verQualPeaoEstaFora(jogo *jogo2x2);

int main()
{
    jogo jogo2x2;
    jogo2x2.p1 = 0;
    jogo2x2.p2 = 1;
    jogo2x2.p3 = 0;
    jogo2x2.p4 = 1;

    printf("Escolha: %d", verQualPeaoEstaFora(&jogo2x2));

    return 0;
}

int verQualPeaoEstaFora(jogo *jogo2x2)
{
    int escolha;
    printf("Escolha qual peao voce quer mover: \n");
    if (jogo2x2->p1 > 0)
    {
        printf("[1] Para mover o peao1\n");
    }
    if (jogo2x2->p2 > 0)
    {
        printf("[2] Para mover o peao2\n");
    }
    if (jogo2x2->p3 > 0)
    {
        printf("[3] Para mover o peao3\n");
    }
    if (jogo2x2->p4 > 0)
    {
        printf("[4] Para mover o peao4\n");
    }
    scanf("%d", &escolha);

    return escolha;
}