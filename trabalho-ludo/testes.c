#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct jogo
{
    int p[4], d1, d2, d3, d4, percurso[4][1];
    char jogador[20];

} jogo;

int girarDado();
void cmcJogo2x2(jogo *jogo2x2);

int main()
{ // inicio main
    jogo jogo2x2[2];
    jogo2x2[0].jogador[20] = "Vermelho";
    jogo2x2[1].jogador[20] = "Amarelo";

    cmcJogo2x2(jogo2x2);

} // fim da main

int girarDado() // gera um numero aleatorio de 1 a 6
{
    int dado;

    dado = rand() % 6 + 1;
    return dado;
}

void cmcJogo2x2(jogo *jogo2x2)
{
    int x = 0;

    // origem dos peao recebe 0
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            jogo2x2[x].p[y] = 0;
        }
    } // Fiim origem dos peao recebe 0

    while (jogo2x2[0].percurso[0][0] != 20)
    {
        if (x == 0)
        {
            printf("----------Vez do %s", jogo2x2[x].jogador);
        }
        if (x == 1)
        {
            printf("----------Vez do %s", jogo2x2[x].jogador);
        }

        jogo2x2[x].d1 = girarDado(); // dado1 recebe valor do dado

        printf("Dado-1 girado = %d\n", jogo2x2[x].d1);

        if (jogo2x2[x].d1 == 6 && jogo2x2[x].p[0] == 0 && jogo2x2[x].p[1] == 0 && jogo2x2[x].p[2] == 0 && jogo2x2[x].p[3] == 0)
        {
            // origem dos peao recebe 1
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 4; y++)
                {
                    jogo2x2[x].p[y] = 1;
                }
            }
            // Fiim origem dos peao recebe 0

            jogo2x2[x].d2 = girarDado(); // dado2 recebe valor do dado
            printf("Dado-2 girado = %d\n", jogo2x2[x].d2);

            if (jogo2x2[x].d2 == 6)
            {
                jogo2x2[x].d3 = girarDado(); // dado3 recebe valor do dado
                printf("Dado-3 girado = %d\n", jogo2x2[x].d3);

                if (jogo2x2[x].d3 == 6)
                {
                    printf("Passou a vez!\n");
                    x++; // passa a vez
                }
                if (jogo2x2[x].d3 != 6)
                {
                    printf("p1 = valor\n");
                    jogo2x2[x].percurso[0][0] = jogo2x2[x].d2 + jogo2x2[x].d3;
                    printf("p1 esta na casa = %d\n", jogo2x2[x].percurso[0][0]);
                }
            }

            if (jogo2x2[x].d2 != 6)
            {
                printf("\nDado2!=6 \n");
                printf("p1 = valor\n");
                jogo2x2[x].percurso[0][0] = jogo2x2[x].d2;
                printf("p1 esta na casa = %d\n", jogo2x2[x].percurso[0][0]);
            }
        }
        else
        {
            printf("Passou a vez!\n");
            x--; // passa a vez
        }
    }
}

escolhePeaoComOrigem0(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p1 = 1;
            jogo2x2[0].percurso[0][0] = 1; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
            Jogo2x2[0].jogador = Jogo2x2[0].dado2 + Jogo2x2[0].dado3;
            Jogo2x2[0].percurso[0][1] = Jogo2x2[0].jogador;
            printf("Peao1 esta na casa %d do percurso!\n", Jogo2x2[0].percurso[0][1]);
            *inicio = 2;
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p1 = 1;
            jogo2x2[1].percurso[0][0] = 1; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
            Jogo2x2[1].jogador = Jogo2x2[1].dado2 + Jogo2x2[1].dado3;
            Jogo2x2[1].percurso[0][1] = Jogo2x2[1].jogador;
            printf("Peao1 esta na casa %d do percurso!\n", Jogo2x2[1].percurso[0][1]);
            *inicio = 1;
        }
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p2 = 1;
            jogo2x2[0].percurso[1][0] = 1; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
            Jogo2x2[0].jogador = Jogo2x2[0].dado2 + Jogo2x2[0].dado3;
            Jogo2x2[0].percurso[1][1] = Jogo2x2[0].jogador;
            printf("Peao2 esta na casa %d do percurso!\n", Jogo2x2[0].percurso[1][1]);
            *inicio = 2;
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p2 = 1;
            jogo2x2[1].percurso[1][0] = 1; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
            Jogo2x2[1].jogador = Jogo2x2[1].dado2 + Jogo2x2[1].dado3;
            Jogo2x2[1].percurso[1][1] = Jogo2x2[1].jogador;
            printf("Peao2 esta na casa %d do percurso!\n", Jogo2x2[1].percurso[1][1]);
            *inicio = 1;
        }
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p3 = 1;
            jogo2x2[0].percurso[2][0] = 1; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
            Jogo2x2[0].jogador = Jogo2x2[0].dado2 + Jogo2x2[0].dado3;
            Jogo2x2[0].percurso[2][1] = Jogo2x2[0].jogador;
            printf("Peao3 esta na casa %d do percurso!\n", Jogo2x2[0].percurso[2][1]);
            *inicio = 2;
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p3 = 1;
            jogo2x2[1].percurso[2][0] = 1; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
            Jogo2x2[1].jogador = Jogo2x2[1].dado2 + Jogo2x2[1].dado3;
            Jogo2x2[1].percurso[2][1] = Jogo2x2[1].jogador;
            printf("Peao3 esta na casa %d do percurso!\n", Jogo2x2[1].percurso[2][1]);
            *inicio = 1;
        }
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p4 = 1;
            jogo2x2[0].percurso[3][0] = 1; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
            Jogo2x2[0].jogador = Jogo2x2[0].dado2 + Jogo2x2[0].dado3;
            Jogo2x2[0].percurso[3][1] = Jogo2x2[0].jogador;
            printf("Peao4 esta na casa %d do percurso!\n", Jogo2x2[0].percurso[3][1]);
            *inicio = 2;
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p4 = 1;
            jogo2x2[1].percurso[3][0] = 1; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
            Jogo2x2[1].jogador = Jogo2x2[1].dado2 + Jogo2x2[1].dado3;
            Jogo2x2[1].percurso[3][1] = Jogo2x2[1].jogador;
            printf("Peao4 esta na casa %d do percurso!\n", Jogo2x2[1].percurso[3][1]);
            *inicio = 1;
        }
    }
}
