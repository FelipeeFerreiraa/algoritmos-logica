#include <stdio.h>
#include <time.h>
#include <string.h>
#include <conio.h> // colorir as letras

#define ANSI_COLOR_RED "\x1b[31m"    // cores em ANSI vermelho
#define ANSI_COLOR_YELLOW "\033[33m" // cores em ANSI amarelo
#define ANSI_COLOR_GREEN "\033[32m"  // cores em ANSI verde
#define ANSI_COLOR_NONE "\033[0m"    // cores em ANSI volta a cor ao normal

typedef struct jogo
{
    int dado1, dado2, dado3, jogador, p1, p2, p3, p4, percurso[4][2];

} jogo;

int quemComeca2x2();
int girarDado();
void inicio2x2(jogo *jogo2x2, int a, int *inicio);

void retaFinal(jogo *jogo2x2, int a, int *inicio);

// ---------peao
void escolhaPeaoAmareloDado1(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado2(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado3(jogo *jogo2x2, int a, int *inicio);

void escolheDadoForaOrigem1A(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem2A(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem3A(jogo *jogo2x2, int a, int *inicio);

void escolhaPeaoAmareloDado2Diferente6(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado2Diferente600(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado2Diferente6PeaoFora(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo *jogo2x2, int a, int *inicio);

void escolhePeaoComOrigem0(jogo *jogo2x2, int a, int *inicio);

int verQualPeaoEstaFora(jogo *jogo2x2);
// ---------fiiim peao

int main()
{ //------------- inicio main-------------------------------

    srand(time(NULL));
    jogo jogo2x2[2];
    int inicio = quemComeca2x2(), escolhaModo;

    // origem dos peao no percurso recebe zero
    for (int y = 0; y < 4; y++)
    {
        jogo2x2[0].percurso[y][1] = 0;
        jogo2x2[1].percurso[y][1] = 0;
    }
    // Fiim origem dos peao no percurso recebe zero

    // origem dos peao e da primeira casa recebe zero
    for (int x = 0; x < 2; x++)
    {

        jogo2x2[x].p1 = 0;
        jogo2x2[x].p2 = 0;
        jogo2x2[x].p3 = 0;
        jogo2x2[x].p4 = 0;

    } // Fiim origem dos peao e da primeira casa recebe zero

    printf("\n\n----Jogo: Ludo Titan----\n\n");

    do
    {
        printf("Escolha qual modo deseja jogar:\n[1] para 2x2\n[2] para 4x4\n");
        scanf("%d", &escolhaModo);
    } while (escolhaModo != 2 && escolhaModo != 1);

    if (escolhaModo == 1)
    { // jogo 2x2   (vermelho vs Amarelo)

        inicio2x2(jogo2x2, 2, &inicio);

    } //---------------------Fim jogo 2x2   (vermelho vs Amarelo)

    if (escolhaModo == 2)
    { // jogo 4x4

    } //---------------------Fim jogo 4x4

    return 0;
} //---------------- fim da main --------------------------------------------

int quemComeca2x2() // retorna 1 ou 2, se for 1 jogador1 cmç se 2 jogador2 cmç
{
    int comeca;

    comeca = rand() % 2 + 1;
    return comeca;
}

int girarDado() // gera um numero aleatorio de 1 a 6
{
    int dado;

    dado = rand() % 6 + 1;
    return dado;
}

void inicio2x2(jogo *jogo2x2, int a, int *inicio)
{
    // origem dos peao no percurso recebe zero
    for (int y = 0; y < 4; y++)
    {
        jogo2x2[0].percurso[y][1] = 0;
        jogo2x2[1].percurso[y][1] = 0;
    }
    // Fiim origem dos peao no percurso recebe zero

    while (1)
    { // inicio do loopF

        if (*inicio == 1)
        {

            printf(ANSI_COLOR_RED "-------------------------[Jogador 1], SUA VEZ (vermelho) \n" ANSI_COLOR_NONE);

            jogo2x2[0].dado1 = girarDado(); // dado1 recebe valor do dado

            printf("Dado-1 girado = %d\n", jogo2x2[0].dado1);

            if ((jogo2x2[0].dado1 == 6) && (jogo2x2[0].p1 > 0 || jogo2x2[0].p2 > 0 || jogo2x2[0].p3 > 0 || jogo2x2[0].p4 > 0))
            { // compara o dado1 com a posicao dos peao se maior q zero ta no percurso

                jogo2x2[0].dado2 = girarDado(); // dado2 recebe valor do dado
                printf("Dado-2 girado = %d\n", jogo2x2[0].dado2);

                if (jogo2x2[0].dado2 == 6)
                {
                    jogo2x2[0].dado3 = girarDado(); // dado3 recebe valor do dado
                    printf("Dado-3 girado = %d\n", jogo2x2[0].dado3);

                    if (jogo2x2[0].dado3 == 6)
                    {
                        printf("Passou a vez!\n");
                    }
                    if (jogo2x2[0].dado3 != 6)
                    {
                        escolheDadoForaOrigem1A(jogo2x2, 2, inicio);
                    }
                    *inicio = 2; // passa a vez
                }

                if (jogo2x2[0].dado2 != 6)
                {
                    // escolhaPeaoAmareloDado2Diferente600(jogo2x2, 2, inicio);
                    escolhaPeaoAmareloDado2Diferente6PeaoFora(jogo2x2, 2, inicio);
                }
                *inicio = 2; // passa a vez
            }

            if ((jogo2x2[0].dado1 == 6) && (jogo2x2[0].p1 == 0 && jogo2x2[0].p2 == 0 && jogo2x2[0].p3 == 0 && jogo2x2[0].p4 == 0)) // compara o dado1 com a posicao dos peao se for zero ta na origem
            {
                jogo2x2[0].dado2 = girarDado(); // dado2 recebe valor do dado
                printf("Dado-2 girado = %d\n", jogo2x2[0].dado2);

                if (jogo2x2[0].dado2 == 6)
                {
                    jogo2x2[0].dado3 = girarDado(); // dado3 recebe valor do dado
                    printf("Dado-3 girado = %d\n", jogo2x2[0].dado3);

                    if (jogo2x2[0].dado3 == 6)
                    {
                        printf("Passou a vez!\n");
                    }
                    if (jogo2x2[0].dado3 != 6)
                    {
                        escolhaPeaoAmareloDado1(jogo2x2, 2, inicio);
                    }
                }

                if (jogo2x2[0].dado2 != 6)
                {
                    escolhePeaoComOrigem0(jogo2x2, 2, inicio);
                }
                *inicio = 2; // passa a vez
            }

            if ((jogo2x2[0].dado1 != 6) && (jogo2x2[0].p1 > 0 || jogo2x2[0].p2 > 0 || jogo2x2[0].p3 > 0 || jogo2x2[0].p4 > 0))
            {
                escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo2x2, 2, inicio);
                *inicio = 2; // passa a vez
            }
            else if ((jogo2x2[0].dado1 != 6) && (jogo2x2[0].p1 == 0 && jogo2x2[0].p2 == 0 && jogo2x2[0].p3 == 0 && jogo2x2[0].p4 == 0))
            {
                printf("Passou a vez!\n");
                *inicio = 2; // passa a vez
            }

            printf(ANSI_COLOR_RED "Peao1-Vermelho esta na casa %d\nPeao2-Vermelho esta na casa %d\nPeao3-Vermelho esta na casa %d\nPeao4-Vermelho esta na casa %d\n" ANSI_COLOR_NONE, jogo2x2[0].percurso[0][1], jogo2x2[0].percurso[1][1], jogo2x2[0].percurso[2][1], jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            printf(ANSI_COLOR_YELLOW "-------------------------[Jogador 2], SUA VEZ (amarelo) \n" ANSI_COLOR_NONE);

            jogo2x2[1].dado1 = girarDado(); // dado1 recebe valor do dado
            printf("Dado-1 girado = %d\n", jogo2x2[1].dado1);

            /*

             if (jogo2x2[1].p1 < 0)
             {
                 jogo2x2[1].percurso[0][1] = 57;
                 printf(ANSI_COLOR_GREEN "Peao1-Amarelo esta na casa %d\n " ANSI_COLOR_NONE, jogo2x2[1].percurso[0][1]);
             }


            */

            if ((jogo2x2[1].dado1 == 6) && (jogo2x2[1].p1 > 0 || jogo2x2[1].p2 > 0 || jogo2x2[1].p3 > 0 || jogo2x2[1].p4 > 0))
            { // compara o dado1 com a posicao dos peao se maior q zero ta no percurso

                jogo2x2[1].dado2 = girarDado(); // dado2 recebe valor do dado
                printf("Dado-2 girado = %d\n", jogo2x2[1].dado2);

                if (jogo2x2[1].dado2 == 6)
                {
                    jogo2x2[1].dado3 = girarDado(); // dado3 recebe valor do dado
                    printf("Dado-3 girado = %d\n", jogo2x2[1].dado3);

                    if (jogo2x2[1].dado3 == 6)
                    {
                        printf("Passou a vez!\n");
                    }
                    if (jogo2x2[1].dado3 != 6)
                    {
                        escolheDadoForaOrigem1A(jogo2x2, 2, inicio);
                    }
                }

                if (jogo2x2[1].dado2 != 6)
                {
                    // escolhaPeaoAmareloDado2Diferente600(jogo2x2, 2, inicio);
                    escolhaPeaoAmareloDado2Diferente6PeaoFora(jogo2x2, 2, inicio);
                }
                *inicio = 1;
            }

            if ((jogo2x2[1].dado1 == 6) && (jogo2x2[1].p1 == 0 && jogo2x2[1].p2 == 0 && jogo2x2[1].p3 == 0 && jogo2x2[1].p4 == 0))
            {

                jogo2x2[1].dado2 = girarDado(); // dado2 recebe valor do dado
                printf("Dado-2 girado = %d\n", jogo2x2[1].dado2);

                if (jogo2x2[1].dado2 == 6)
                {
                    jogo2x2[1].dado3 = girarDado(); // dado3 recebe valor do dado
                    printf("Dado-3 girado = %d\n", jogo2x2[1].dado3);

                    if (jogo2x2[1].dado3 == 6)
                    {
                        printf("Passou a vez!\n");
                    }
                    if (jogo2x2[1].dado3 != 6)
                    {
                        escolhaPeaoAmareloDado1(jogo2x2, 2, inicio);
                    }
                    *inicio = 1; // passa a vez
                }

                if (jogo2x2[1].dado2 != 6)
                {
                    escolhePeaoComOrigem0(jogo2x2, 2, inicio);
                }
                *inicio = 1;
            }

            if ((jogo2x2[1].dado1 != 6) && (jogo2x2[1].p1 > 0 || jogo2x2[1].p2 > 0 || jogo2x2[1].p3 > 0 || jogo2x2[1].p4 > 0))
            {
                escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo2x2, 2, inicio);
                *inicio = 1; // passa a vez
            }

            else if ((jogo2x2[1].dado1 != 6) && (jogo2x2[1].p1 == 0 && jogo2x2[1].p2 == 0 && jogo2x2[1].p3 == 0 && jogo2x2[1].p4 == 0))
            {
                printf("Passou a vez!\n");
                *inicio = 1; // passa a vez
            }

            printf(ANSI_COLOR_YELLOW "Peao1-Amarelo esta na casa %d\nPeao2-Amarelo esta na casa %d\nPeao3-Amarelo esta na casa %d\nPeao4-Amarelo esta na casa %d\n" ANSI_COLOR_NONE, jogo2x2[1].percurso[0][1], jogo2x2[1].percurso[1][1], jogo2x2[1].percurso[2][1], jogo2x2[1].percurso[3][1]);
        }

    } // fim do loop
}

// funcao para os peoes

void escolhaPeaoAmareloDado1(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    scanf("%d", &escolhaPeao);

    // escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p1 = 1;
            jogo2x2[0].percurso[0][1]++; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p1 = 1;
            jogo2x2[1].percurso[0][1]++; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p2 = 1;
            jogo2x2[0].percurso[1][1]++; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p2 = 1;
            jogo2x2[1].percurso[1][1]++; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p3 = 1;
            jogo2x2[0].percurso[2][1]++; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p3 = 1;
            jogo2x2[1].percurso[2][1]++; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p4 = 1;
            jogo2x2[0].percurso[3][1]++; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p4 = 1;
            jogo2x2[1].percurso[3][1]++; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2(jogo2x2, 2, inicio);
    }
}

void escolhaPeaoAmareloDado2(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    // printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            // if (jogo2x2[0].p1 > 0)
            // {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
            // }
            // if (jogo2x2[0].p1 == 0)
            // {
            //   printf("Peao1 esta na origem! \n\n");
            // }
        }

        if (*inicio == 2)
        {
            // if (jogo2x2[1].p1 > 0)
            // {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
            //  }
            // if (jogo2x2[1].p1 == 0)
            // {
            //    printf("Peao1 esta na origem! \n\n");
            // }
        }

        escolhaPeaoAmareloDado3(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            // if (jogo2x2[0].p2 > 0)
            // {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
            //  }
            //  if (jogo2x2[0].p2 == 0)
            // {
            //     printf("Peao2 esta na origem! \n\n");
            // }
        }

        if (*inicio == 2)
        {
            //  if (jogo2x2[1].p2 > 0)
            //  {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
            // }
            // if (jogo2x2[1].p2 == 0)
            // {
            //     printf("Peao2 esta na origem! \n\n");
            // }
        }

        escolhaPeaoAmareloDado3(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            // if (jogo2x2[0].p3 > 0)
            // {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
            //   }
            //   if (jogo2x2[0].p3 == 0)
            //  {
            //      printf("Peao3 esta na origem! \n\n");
            //  }
        }

        if (*inicio == 2)
        {
            //  if (jogo2x2[1].p3 > 0)
            //  {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
            //  }
            //  if (jogo2x2[1].p3 == 0)
            //  {
            //     printf("Peao3 esta na origem! \n\n");
            // }
        }

        escolhaPeaoAmareloDado3(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            //  if (jogo2x2[0].p4 > 0)
            //  {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
            //  }
            // if (jogo2x2[0].p4 == 0)
            // {
            //     printf("Peao4 esta na origem! \n\n");
            // }
        }

        if (*inicio == 2)
        {
            //  if (jogo2x2[1].p4 > 0)
            //  {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
            // }
            // if (jogo2x2[1].p4 == 0)
            // {
            //     printf("Peao4 esta na origem! \n\n");
            // }
        }

        escolhaPeaoAmareloDado3(jogo2x2, 2, inicio);
    }
}

void escolhaPeaoAmareloDado3(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    // printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado3;
            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado3;
            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
        }
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado3;
            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado3;
            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
        }
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado3;
            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado3;
            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
        }
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado3;
            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado3;
            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
        }
    }
}

void escolheDadoForaOrigem1A(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    // printf("Escolha qual peao voce quer mover para a primeira casa: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].percurso[0][1] += jogo2x2[0].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].percurso[0][1] += jogo2x2[1].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
        }

        escolheDadoForaOrigem2A(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 2)
    {

        if (*inicio == 1)
        {
            jogo2x2[0].percurso[1][1] += jogo2x2[0].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].percurso[1][1] += jogo2x2[1].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
        }

        escolheDadoForaOrigem2A(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 3)
    {

        if (*inicio == 1)
        {
            jogo2x2[0].percurso[2][1] += jogo2x2[0].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].percurso[2][1] += jogo2x2[1].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
        }

        escolheDadoForaOrigem2A(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 4)
    {

        if (*inicio == 1)
        {
            jogo2x2[0].percurso[3][1] += jogo2x2[0].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].percurso[3][1] += jogo2x2[1].dado3;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
        }

        escolheDadoForaOrigem2A(jogo2x2, 2, inicio);
    }
}

void escolheDadoForaOrigem2A(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    // printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
        }

        escolheDadoForaOrigem3A(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
        }

        escolheDadoForaOrigem3A(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
        }

        escolheDadoForaOrigem3A(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
        }

        escolheDadoForaOrigem3A(jogo2x2, 2, inicio);
    }
}

void escolheDadoForaOrigem3A(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
        }
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
        }
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
        }
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
        }
    }
}

void escolhaPeaoAmareloDado2Diferente6(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    // printf("\nEscolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p1 = 1;
            jogo2x2[0].percurso[0][1]++; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p1 = 1;
            jogo2x2[1].percurso[0][1]++; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
        }
        escolhaPeaoAmareloDado2Diferente600(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p2 = 1;
            jogo2x2[0].percurso[1][1]++; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p2 = 1;
            jogo2x2[1].percurso[1][1]++; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2Diferente600(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p3 = 1;
            jogo2x2[0].percurso[2][1]++; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p3 = 1;
            jogo2x2[1].percurso[2][1]++; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2Diferente600(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p4 = 1;
            jogo2x2[0].percurso[3][1]++; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p4 = 1;
            jogo2x2[1].percurso[3][1]++; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
        }

        escolhaPeaoAmareloDado2Diferente600(jogo2x2, 2, inicio);
    }
}

void escolhaPeaoAmareloDado2Diferente600(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    // printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
        }
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
        }
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
        }
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
        }
    }
}

void escolhaPeaoAmareloDado2Diferente6PeaoFora(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    scanf("%d", &escolhaPeao);

    // escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            //  jogo2x2[0].jogador = jogo2x2[0].dado2;
            // jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            jogo2x2[0].p1 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 saiu da origem! \n");
        }

        if (*inicio == 2)
        {
            // jogo2x2[1].jogador = jogo2x2[1].dado2;
            // jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            jogo2x2[1].p1 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 saiu da origem! \n");
        }

        printf("Dado2:\n");
        escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            // jogo2x2[0].jogador = jogo2x2[0].dado2;
            // jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            jogo2x2[0].p1 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 saiu da origem! \n");
        }

        if (*inicio == 2)
        {
            // jogo2x2[1].jogador = jogo2x2[1].dado2;
            // jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            jogo2x2[1].p2 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 saiu da origem! \n");
        }

        printf("Dado2:\n");
        escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            // jogo2x2[0].jogador = jogo2x2[0].dado2;
            // jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            jogo2x2[0].p3 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
            //  jogo2x2[1].jogador = jogo2x2[1].dado2;
            // jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            jogo2x2[1].p3 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 saiu da origem! \n\n");
        }

        printf("Dado2:\n");
        escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo2x2, 2, inicio);
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            // jogo2x2[0].jogador = jogo2x2[0].dado2;
            // jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            jogo2x2[0].p4 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 saiu da origem! \n\n");
        }

        if (*inicio == 2)
        {
           // jogo2x2[1].jogador = jogo2x2[1].dado2;
            //jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            jogo2x2[1].p4 = 1;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 saiu da origem! \n\n");
        }

        printf("Dado2:\n");
        escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo2x2, 2, inicio);
    }
}

void escolhaPeaoAmareloDado3Diferente6PeaoFora(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    // printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    // scanf("%d", &escolhaPeao);

    escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[0][1]);
        }
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[1][1]);
        }
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[2][1]);
        }
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].jogador = jogo2x2[0].dado1;
            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].jogador = jogo2x2[1].dado1;
            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso! \n\n", jogo2x2[1].percurso[3][1]);
        }
    }
}

void escolhePeaoComOrigem0(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1\n[2] peao2\n[3] peao3\n[4] peao4\n");
    scanf("%d", &escolhaPeao);

    // escolhaPeao = verQualPeaoEstaFora(jogo2x2);

    if (escolhaPeao == 1)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p1 = 1;
            jogo2x2[0].percurso[0][0] = 1; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[0][1] = jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso!\n", jogo2x2[0].percurso[0][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p1 = 1;
            jogo2x2[1].percurso[0][0] = 1; // saiu da origem
            printf("Peao1 saiu da origem! \n\n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[0][1] = jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao1 esta na casa %d do percurso!\n", jogo2x2[1].percurso[0][1]);
        }
    }

    if (escolhaPeao == 2)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p2 = 1;
            jogo2x2[0].percurso[1][0] = 1; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[1][1] = jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso!\n", jogo2x2[0].percurso[1][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p2 = 1;
            jogo2x2[1].percurso[1][0] = 1; // saiu da origem
            printf("Peao2 saiu da origem! \n\n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[1][1] = jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao2 esta na casa %d do percurso!\n", jogo2x2[1].percurso[1][1]);
        }
    }

    if (escolhaPeao == 3)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p3 = 1;
            jogo2x2[0].percurso[2][0] = 1; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[2][1] = jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso!\n", jogo2x2[0].percurso[2][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p3 = 1;
            jogo2x2[1].percurso[2][0] = 1; // saiu da origem
            printf("Peao3 saiu da origem! \n\n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[2][1] = jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao3 esta na casa %d do percurso!\n", jogo2x2[1].percurso[2][1]);
        }
    }

    if (escolhaPeao == 4)
    {
        if (*inicio == 1)
        {
            jogo2x2[0].p4 = 1;
            jogo2x2[0].percurso[3][0] = 1; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
            jogo2x2[0].jogador = jogo2x2[0].dado2;
            jogo2x2[0].percurso[3][1] = jogo2x2[0].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso!\n", jogo2x2[0].percurso[3][1]);
        }

        if (*inicio == 2)
        {
            jogo2x2[1].p4 = 1;
            jogo2x2[1].percurso[3][0] = 1; // saiu da origem
            printf("Peao4 saiu da origem! \n\n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            jogo2x2[1].percurso[3][1] = jogo2x2[1].jogador;
            retaFinal(jogo2x2, 2, inicio);
            printf("Peao4 esta na casa %d do percurso!\n", jogo2x2[1].percurso[3][1]);
        }
    }
}

void retaFinal(jogo *jogo2x2, int a, int *inicio)
{
    if (*inicio == 1)
    {
        if (jogo2x2[0].percurso[0][1] >= 52 && jogo2x2[0].percurso[0][1] <= 57)
        {
            printf("Peao1 esta na reta final!! \n");

            if (jogo2x2[0].percurso[0][1] == 57)
            {
                jogo2x2[0].p1 = -1; // significa q o peao esta no final e para de somar
                printf("Peao1 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[0].percurso[0][1] > 57)
            {
                jogo2x2[0].percurso[0][1] -= jogo2x2[0].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }

        if (jogo2x2[0].percurso[1][1] >= 52 && jogo2x2[0].percurso[1][1] <= 57)
        {

            printf("Peao2 esta na reta final!! \n");

            if (jogo2x2[0].percurso[1][1] == 57)
            {
                jogo2x2[0].p2 = -1; // significa q o peao esta no final e para de somar
                printf("Peao2 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[0].percurso[1][1] > 57)
            {
                jogo2x2[0].percurso[1][1] -= jogo2x2[0].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }

        if (jogo2x2[0].percurso[2][1] >= 52 && jogo2x2[0].percurso[2][1] <= 57)
        {
            printf("Peao3 esta na reta final!! \n");

            if (jogo2x2[0].percurso[2][1] == 57)
            {
                jogo2x2[0].p3 = -1; // significa q o peao esta no final e para de somar
                printf("Peao3 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[0].percurso[2][1] > 57)
            {
                jogo2x2[0].percurso[2][1] -= jogo2x2[0].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }

        if (jogo2x2[0].percurso[3][1] >= 52 && jogo2x2[0].percurso[3][1] <= 57)
        {
            printf("Peao4 esta na reta final!! \n");

            if (jogo2x2[0].percurso[3][1] == 57)
            {
                jogo2x2[0].p4 = -1; // significa q o peao esta no final e para de somar
                printf("Peao4 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[0].percurso[3][1] > 57)
            {
                jogo2x2[0].percurso[3][1] -= jogo2x2[0].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }
    }

    if (*inicio == 2)
    {
        if (jogo2x2[1].percurso[0][1] >= 52 && jogo2x2[1].percurso[0][1] <= 57)
        {
            printf("Peao1 esta na reta final!! \n");

            if (jogo2x2[1].percurso[0][1] == 57)
            {
                jogo2x2[1].p1 = -1; // significa q o peao esta no final e para de somar
                printf("Peao1 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[1].percurso[0][1] > 57)
            {
                jogo2x2[1].percurso[0][1] -= jogo2x2[1].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }

        if (jogo2x2[1].percurso[1][1] >= 52 && jogo2x2[1].percurso[1][1] <= 57)
        {
            printf("Peao2 esta na reta final!! \n");

            if (jogo2x2[1].percurso[1][1] == 57)
            {
                jogo2x2[1].p2 = -1; // significa q o peao esta no final e para de somar
                printf("Peao2 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[1].percurso[1][1] > 57)
            {
                jogo2x2[1].percurso[1][1] -= jogo2x2[1].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }

        if (jogo2x2[1].percurso[2][1] >= 52 && jogo2x2[1].percurso[2][1] <= 57)
        {
            printf("Peao3 esta na reta final!! \n");

            if (jogo2x2[2].percurso[2][1] == 57)
            {
                jogo2x2[2].p3 = -1; // significa q o peao esta no final e para de somar
                printf("Peao3 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[2].percurso[2][1] > 57)
            {
                jogo2x2[2].percurso[2][1] -= jogo2x2[2].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }

        if (jogo2x2[1].percurso[3][1] >= 52 && jogo2x2[1].percurso[3][1] <= 57)
        {
            printf("Peao4 esta na reta final!! \n");

            if (jogo2x2[1].percurso[3][1] == 57)
            {
                jogo2x2[1].p4 = -1; // significa q o peao esta no final e para de somar
                printf("Peao4 ganhou!! (chegou no trianguloFinal)\n");
            }
            if (jogo2x2[1].percurso[3][1] > 57)
            {
                jogo2x2[1].percurso[3][1] -= jogo2x2[1].jogador;
                printf("Passou a vez! (retaFinal)\n");
                *inicio = 2; // passa a vez
            }
        }
    }
}

void verificarPeaoPercurso(jogo *jogo2x2)
{
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

/*FALTA FAZER

*)acabar a reta final e parar de somar

**)comer os peoes com casas iguais

***) aparecer apenas peoes q podem movimentar


            -1 peao ganhou (triangulo final)
             0 peao esta na origem
             1 ppeao esta no percurso

*/