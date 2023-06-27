#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct jogo
{
    int dado1, dado2, dado3, jogador, p1, p2, p3, p4, percurso[4][2];

} jogo;

int quemComeca2x2();
int girarDado();
void inicio2x2(jogo *jogo2x2, int a, int *inicio);
void meioDeJogo2x2(jogo *jogo2x2, int a, int *inicio);
// peoes vermelhos
void escolhaPeaoVermelhoDado1(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoVermelhoDado2(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoVermelhoDado3(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem1(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem2(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem3(jogo *jogo2x2, int a, int *inicio);
// fim peao vermelho

// peao amarelo
void escolhaPeaoAmareloDado1(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado2(jogo *jogo2x2, int a, int *inicio);
void escolhaPeaoAmareloDado3(jogo *jogo2x2, int a, int *inicio);

void escolheDadoForaOrigem1A(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem2A(jogo *jogo2x2, int a, int *inicio);
void escolheDadoForaOrigem3A(jogo *jogo2x2, int a, int *inicio);
// fiiim peao amarelo

int main()
{ //------------- inicio main

    srand(time(NULL));
    jogo jogo2x2[2];
    int inicio = quemComeca2x2(), escolhaModo;

    // origem dos peao e da primeira casa recebe zero
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            jogo2x2[x].percurso[y][0] = 0;
            jogo2x2[x].percurso[y][1] = 0;
        }
    } // Fiim origem dos peao e da primeira casa recebe zero

    printf("\n\n----Jogo: Ludo Titan----\n\n");

    do
    {
        printf("Escolha qual modo deseja jogar:\n[1] para 2x2\n[2] para 4x4\n");
        scanf("%d", &escolhaModo);
    } while (escolhaModo != 2 && escolhaModo != 1);

    if (escolhaModo == 1)
    { // jogo 2x2   (vermelho vs Amarelo)

        if (jogo2x2[0].percurso[0][0] == 0 || jogo2x2[0].percurso[0][0] == 0 || jogo2x2[0].percurso[1][0] == 0 || jogo2x2[0].percurso[2][0] == 0 || jogo2x2[0].percurso[3][0] == 0 || jogo2x2[1].percurso[0][1] == 0 || jogo2x2[1].percurso[1][1] == 0 || jogo2x2[1].percurso[2][1] == 0 || jogo2x2[1].percurso[3][1] == 0) // ---peao esta na origem
        {
            inicio2x2(jogo2x2, 2, &inicio);

            printf("peao esta na origem!!\n");
        } //------------------------------------Fim peao esta na origem

        if (jogo2x2[0].percurso[0][0] > 0 || jogo2x2[0].percurso[0][0] > 0 || jogo2x2[0].percurso[1][0] > 0 || jogo2x2[0].percurso[2][0] > 0 || jogo2x2[0].percurso[3][0] > 0 || jogo2x2[1].percurso[0][1] > 0 || jogo2x2[1].percurso[1][1] > 0 || jogo2x2[1].percurso[2][1] > 0 || jogo2x2[1].percurso[3][1] > 0) // ---peao saiu da origem
        {

            meioDeJogo2x2(jogo2x2, 2, &inicio);

            printf("Saiu da origem!!\n");
        } //------------------------------------Fim peao saiu da origem

    } //---------------------Fim jogo 2x2   (vermelho vs Amarelo)

    if (escolhaModo == 2)
    { // jogo 4x4

    } //---------------------Fim jogo 4x4

    return 0;
} //---------------- fim da main

int quemComeca2x2() // retorna 1 ou 2, se for 1 jogador1 cmç se 2 jogador2 cmç
{
    int comeca;
    srand(time(NULL));
    comeca = rand() % 2 + 1;
    return comeca;
}

int girarDado() // gera um numero aleatorio de 1 a 6
{
    int dado;
    srand(time(NULL));
    dado = rand() % 6 + 1;
    return dado;
}

void inicio2x2(jogo *jogo2x2, int a, int *inicio)
{
    srand(time(NULL));
    while (jogo2x2[0].percurso[0][0] != 1 || jogo2x2[0].percurso[1][0] != 1 || jogo2x2[0].percurso[2][0] != 1 || jogo2x2[0].percurso[3][0] != 1 || jogo2x2[1].percurso[0][0] != 1 || jogo2x2[1].percurso[1][0] != 1 || jogo2x2[1].percurso[2][0] != 1 || jogo2x2[1].percurso[3][0] != 1)
    { // inicio do loop

        if (*inicio == 1)
        {

            printf("-------------------------[Jogador 1], SUA VEZ (vermelho) \n");

            jogo2x2[0].dado1 = girarDado(); // dado1 recebe valor do dado

            printf("Dado-1 girado = %d\n", jogo2x2[0].dado1);

            if (jogo2x2[0].dado1 == 6)
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
                        *inicio = 2; // passa a vez
                    }
                    if (jogo2x2[0].dado3 != 6)
                    {

                        // origem dos peao recebe 1
                        for (int x = 0; x < 2; x++)
                        {
                            for (int y = 0; y < 4; y++)
                            {
                                jogo2x2[x].percurso[y][0] = 1;
                            }
                        } // Fiim origem dos peao recebe 1
                        printf("\nDado1:\n");

                        escolhaPeaoVermelhoDado1(jogo2x2, 2, &inicio);
                    }
                }

                if (jogo2x2[0].dado2 != 6)
                {
                    printf("\nDado2!=6 \n");
                    // origem dos peao recebe 1
                    for (int x = 0; x < 2; x++)
                    {
                        for (int y = 0; y < 4; y++)
                        {
                            jogo2x2[x].percurso[y][0] = 1;
                        }
                    } // Fiim origem dos peao recebe 1

                    escolhaPeaoVermelhoDado2(jogo2x2, 2, &inicio);
                }
            }
            else
            {
                printf("Passou a vez!\n");
                *inicio = 2; // passa a vez
            }
        }

        if (*inicio == 2)
        {
            printf("-------------------------[Jogador 2], SUA VEZ (amarelo) \n");

            jogo2x2[1].dado1 = girarDado(); // dado1 recebe valor do dado
            printf("Dado-1 girado = %d\n", jogo2x2[1].dado1);

            if (jogo2x2[1].dado1 == 6)
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
                        *inicio = 1; // passa a vez
                    }
                    if (jogo2x2[1].dado3 != 6)
                    {

                        // origem dos peao recebe 1
                        for (int x = 0; x < 2; x++)
                        {
                            for (int y = 0; y < 4; y++)
                            {
                                jogo2x2[x].percurso[y][0] = 1;
                            }
                        } // Fiim origem dos peao recebe 1
                        printf("\nDado3 !=6 \n");

                        escolhaPeaoAmareloDado1(jogo2x2, 2, &inicio);
                    }
                }

                if (jogo2x2[1].dado2 != 6)
                {

                    // origem dos peao recebe 1
                    for (int x = 0; x < 2; x++)
                    {
                        for (int y = 0; y < 4; y++)
                        {
                            jogo2x2[x].percurso[y][0] = 1;
                        }
                    } // Fiim origem dos peao recebe 1
                    printf("\nDado2 !=6 \n");

                    escolhaPeaoAmareloDado2(jogo2x2, 2, &inicio);
                }
            }
            else
            {
                printf("Passou a vez!\n");
                *inicio = 1;
            }
        }

    } // fim do loop
}

void meioDeJogo2x2(jogo *jogo2x2, int a, int *inicio)
{
    srand(time(NULL));
    if (*inicio == 1)
    {

        printf("-------------------------[Jogador 1], SUA VEZ (vermelho) \n");

        jogo2x2[0].dado1 = girarDado(); // dado1 recebe valor do dado

        printf("Dado-1 girado = %d\n", jogo2x2[0].dado1);

        if (jogo2x2[0].dado1 == 6)
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
                    *inicio = 2; // passa a vez
                }
                if (jogo2x2[0].dado3 != 6)
                {
                    printf("\nDado-1: \n");

                    escolheDadoForaOrigem1(jogo2x2, 2, &inicio);
                }
            }

            if (jogo2x2[0].dado2 != 6)
            {
                printf("\nDado-1: \n");

                escolheDadoForaOrigem2(jogo2x2, 2, &inicio);
            }
        }
        else
        {
            escolheDadoForaOrigem3(jogo2x2, 2, &inicio);
        }
    }

    if (*inicio == 2)
    {
        printf("-------------------------[Jogador 2], SUA VEZ (amarelo) \n");

        jogo2x2[1].dado1 = girarDado(); // dado1 recebe valor do dado
        printf("Dado-1 girado = %d\n", jogo2x2[1].dado1);

        if (jogo2x2[1].dado1 == 6)
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
                    *inicio = 1; // passa a vez
                }
                if (jogo2x2[1].dado3 != 6)
                {
                    printf("\nDado-1: \n");

                    escolheDadoForaOrigem1A(jogo2x2, 2, &inicio);
                }
            }

            if (jogo2x2[1].dado2 != 6)
            {
                printf("\nDado-1: \n");

                escolheDadoForaOrigem2A(jogo2x2, 2, &inicio);
            }
        }
        else
        {
            escolheDadoForaOrigem3A(jogo2x2, 2, &inicio);
        }
    }
}

// funcao para os peoes vermelhos
void escolhaPeaoVermelhoDado1(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover para a primeira casa: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {

        jogo2x2[0].percurso[0][0] = 1; // saiu da origem

        printf("Peao1-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {

        jogo2x2[0].percurso[1][0] = 1; // saiu da origem
        printf("Peao2-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {

        jogo2x2[0].percurso[2][0] = 1; // saiu da origem
        printf("Peao3-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {

        jogo2x2[0].percurso[3][0] = 1; // saiu da origem
        printf("Peao4-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, 2, &inicio);
    }
}

void escolhaPeaoVermelhoDado2(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }
}

void escolhaPeaoVermelhoDado3(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);
    }
}

void escolheDadoForaOrigem1(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover para a primeira casa: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {

        jogo2x2[0].percurso[0][1] += jogo2x2[0].dado3;

        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {

        jogo2x2[0].percurso[1][1] += jogo2x2[0].dado3;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {

        jogo2x2[0].percurso[2][1] += jogo2x2[0].dado3;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {

        jogo2x2[0].percurso[3][1] += jogo2x2[0].dado3;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2(jogo2x2, 2, &inicio);
    }
}

void escolheDadoForaOrigem2(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, 2, &inicio);
    }
}

void escolheDadoForaOrigem3(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);

        *inicio = 2;
    }
}

// funcao para os peoes amarelos
void escolheDadoForaOrigem1A(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover para a primeira casa: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {

        jogo2x2[1].percurso[0][1] += jogo2x2[1].dado3;

        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[0][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2A(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {

        jogo2x2[1].percurso[1][1] += jogo2x2[1].dado3;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[1][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2A(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {

        jogo2x2[1].percurso[2][1] += jogo2x2[1].dado3;
        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[2][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2A(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {

        jogo2x2[1].percurso[3][1] += jogo2x2[1].dado3;
        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[3][1]);

        printf("\nDado2: \n");
        escolheDadoForaOrigem2A(jogo2x2, 2, &inicio);
    }
}

void escolheDadoForaOrigem2A(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[0][1]);

        printf("\nDado1: \n");
        escolheDadoForaOrigem3A(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[1][1]);

        printf("\nDado1: \n");
        escolheDadoForaOrigem3A(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[2][1]);

        printf("\nDado1: \n");
        escolheDadoForaOrigem3A(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[3][1]);

        printf("\nDado1: \n");
        escolheDadoForaOrigem3A(jogo2x2, 2, &inicio);
    }
}

void escolheDadoForaOrigem3A(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[0][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[1][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[2][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[3][1]);

        *inicio = 2;
    }
}

void escolhaPeaoAmareloDado1(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {

        printf("Peao1-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {

        printf("Peao2-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {

        printf("Peao3-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {

        printf("Peao4-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, 2, &inicio);
    }
}

void escolhaPeaoAmareloDado2(jogo *jogo2x2, int a, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[0][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[1][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;

        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[2][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, 2, &inicio);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;

        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[3][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, 2, &inicio);
    }
}

void escolhaPeaoAmareloDado3(jogo *jogo2x2, int a, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;

        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[0][1]);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;

        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[1][1]);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;

        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[2][1]);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;

        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[3][1]);
    }
}
