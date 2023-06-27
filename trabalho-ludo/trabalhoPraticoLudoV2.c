#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct jogo
{
    int dado1, dado2, dado3, jogador, p1, p2, p3, p4, percurso[4][2];

} jogo;

int girarDado();
int quemComeca2x2();
int inicio2x2(jogo *jogo2x2, int a, int *inicio);

int escolhaPeaoVermelhoDado3(jogo *jogo2x2, int *inicio);
int escolhaPeaoVermelhoDado2(jogo *jogo2x2, int *inicio);
int escolhaPeaoVermelhoDado1(jogo *jogo2x2, int *inicio);

int escolhaPeaoAmareloDado3(jogo *jogo2x2, int *inicio);
int escolhaPeaoAmareloDado2(jogo *jogo2x2, int *inicio);
int escolhaPeaoAmareloDado1(jogo *jogo2x2, int *inicio);

int main()
{

    int escolhaModo, inicio = quemComeca2x2(), x;

    printf("\n\n----Jogo: Ludo Titan----\n\n");

    do
    {
        printf("Escolha qual modo deseja jogar:\n[1] para 2x2\n[2] para 4x4\n");
        scanf("%d", &escolhaModo);
    } while (escolhaModo != 2 && escolhaModo != 1);
    jogo jogo2x2[2];

    jogo2x2[0].percurso[0][0] = 0; // origem jogador 1
    jogo2x2[0].percurso[1][0] = 0; // origem jogador 1
    jogo2x2[0].percurso[2][0] = 0; // origem jogador 1
    jogo2x2[0].percurso[3][0] = 0; // origem jogador 1

    jogo2x2[1].percurso[0][0] = 0; // origem jogador 2
    jogo2x2[1].percurso[1][0] = 0; // origem jogador 2
    jogo2x2[1].percurso[2][0] = 0; // origem jogador 2
    jogo2x2[1].percurso[3][0] = 0; // origem jogador 2

    jogo2x2[0].percurso[0][1] = 0; // primeira posicao do percurso
    jogo2x2[0].percurso[1][1] = 0; // primeira posicao do percurso
    jogo2x2[0].percurso[2][1] = 0; // primeira posicao do percurso
    jogo2x2[0].percurso[3][1] = 0; // primeira posicao do percurso

    jogo2x2[1].percurso[0][1] = 0; // primeira posicao do percurso
    jogo2x2[1].percurso[1][1] = 0; // primeira posicao do percurso
    jogo2x2[1].percurso[2][1] = 0; // primeira posicao do percurso
    jogo2x2[1].percurso[3][1] = 0; // primeira posicao do percurso

    inicio2x2(jogo2x2, 2, &inicio);

    if (escolhaModo == 1) // jogo 2x2   (vermelho vs Amarelo)
    {

        if (jogo2x2->percurso[0][0] > 0 || jogo2x2->percurso[1][0] > 0 || jogo2x2->percurso[2][0] > 0 || jogo2x2->percurso[3][0] > 0 || jogo2x2->percurso[0][0] > 0 || jogo2x2->percurso[1][0] > 0 || jogo2x2->percurso[2][0] > 0 || jogo2x2->percurso[3][0] > 0)
        { // significa q o peao esta fora da origem e pode se movimentar pelas casas

            do
            {
                if (inicio == 1)
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
                                inicio = 2;
                            }
                            if (jogo2x2[0].dado3 != 6)
                            {
                                if (jogo2x2->percurso[0][0] > 0 || jogo2x2->percurso[1][0] > 0 || jogo2x2->percurso[2][0] > 0 || jogo2x2->percurso[3][0] > 0 || jogo2x2->percurso[0][0] > 0 || jogo2x2->percurso[1][0] > 0 || jogo2x2->percurso[2][0] > 0 || jogo2x2->percurso[3][0] > 0)
                                {
                                    jogo2x2[0].percurso[0][1] += jogo2x2[0].p1;
                                    printf("Peao1-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[0][1]);
                                    jogo2x2[0].percurso[1][1] += jogo2x2[0].p2;
                                    printf("Peao2-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[1][1]);
                                    jogo2x2[0].percurso[2][1] += jogo2x2[0].p3;
                                    printf("Peao3-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[2][1]);
                                    jogo2x2[0].percurso[3][1] += jogo2x2[0].p4;
                                    printf("Peao4-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[3][1]);

                                    jogo2x2[1].percurso[0][1] += jogo2x2[1].p1;
                                    printf("Peao1-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[0][1]);
                                    jogo2x2[1].percurso[1][1] += jogo2x2[1].p2;
                                    printf("Peao2-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[1][1]);
                                    jogo2x2[1].percurso[2][1] += jogo2x2[1].p3;
                                    printf("Peao3-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[2][1]);
                                    jogo2x2[1].percurso[3][1] += jogo2x2[1].p4;
                                    printf("Peao4-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[3][1]);
                                }
                                else
                                {
                                    printf("\nDado-1: \n");
                                    escolhaPeaoVermelhoDado1(jogo2x2, &inicio);
                                }
                            }
                        }

                        printf("\nDado-2: \n");
                        escolhaPeaoVermelhoDado2(jogo2x2, &inicio);
                    }
                }

                if (inicio == 2)
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
                                inicio = 1;
                            }
                            if (jogo2x2[1].dado3 != 6)
                            {
                                if (jogo2x2->percurso[0][0] > 0 || jogo2x2->percurso[1][0] > 0 || jogo2x2->percurso[2][0] > 0 || jogo2x2->percurso[3][0] > 0 || jogo2x2->percurso[0][0] > 0 || jogo2x2->percurso[1][0] > 0 || jogo2x2->percurso[2][0] > 0 || jogo2x2->percurso[3][0] > 0)
                                {
                                    jogo2x2[0].percurso[0][1] += jogo2x2[0].p1;
                                    printf("Peao1-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[0][1]);
                                    jogo2x2[0].percurso[1][1] += jogo2x2[0].p2;
                                    printf("Peao2-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[1][1]);
                                    jogo2x2[0].percurso[2][1] += jogo2x2[0].p3;
                                    printf("Peao3-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[2][1]);
                                    jogo2x2[0].percurso[3][1] += jogo2x2[0].p4;
                                    printf("Peao4-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[3][1]);

                                    jogo2x2[1].percurso[0][1] += jogo2x2[1].p1;
                                    printf("Peao1-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[0][1]);
                                    jogo2x2[1].percurso[1][1] += jogo2x2[1].p2;
                                    printf("Peao2-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[1][1]);
                                    jogo2x2[1].percurso[2][1] += jogo2x2[1].p3;
                                    printf("Peao3-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[2][1]);
                                    jogo2x2[1].percurso[3][1] += jogo2x2[1].p4;
                                    printf("Peao4-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[3][1]);
                                }
                                else
                                {
                                    printf("\nDado-1: \n");
                                    escolhaPeaoAmareloDado1(jogo2x2, &inicio);
                                }
                            }
                        }

                        printf("\nDado-2: \n");

                        escolhaPeaoAmareloDado2(jogo2x2, &inicio);
                    }
                }

                jogo2x2[0].percurso[0][1] += jogo2x2[0].p1;
                printf("Peao1-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[0][1]);
                jogo2x2[0].percurso[1][1] += jogo2x2[0].p2;
                printf("Peao2-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[1][1]);
                jogo2x2[0].percurso[2][1] += jogo2x2[0].p3;
                printf("Peao3-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[2][1]);
                jogo2x2[0].percurso[3][1] += jogo2x2[0].p4;
                printf("Peao4-Vermelho esta na casa %d do percurso!\n", jogo2x2[0].percurso[3][1]);

                jogo2x2[1].percurso[0][1] += jogo2x2[1].p1;
                printf("Peao1-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[0][1]);
                jogo2x2[1].percurso[1][1] += jogo2x2[1].p2;
                printf("Peao2-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[1][1]);
                jogo2x2[1].percurso[2][1] += jogo2x2[1].p3;
                printf("Peao3-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[2][1]);
                jogo2x2[1].percurso[3][1] += jogo2x2[1].p4;
                printf("Peao4-Amarelo esta na casa %d do percurso!\n", jogo2x2[1].percurso[3][1]);

                x++;
            }

            while (jogo2x2->percurso[0][1] != 57 || jogo2x2->percurso[1][1] != 57 || jogo2x2->percurso[2][1] != 57 || jogo2x2->percurso[3][1] != 57 || jogo2x2->percurso[0][1] != 57 || jogo2x2->percurso[1][1] != 57 || jogo2x2->percurso[2][1] != 57 || jogo2x2->percurso[3][1] != 57);
        }

        if (escolhaModo == 2) // jogo 4x4
        {
        }
    }

    return 0;
} //-------------Fim da main

int girarDado() // gera um numero aleatorio de 1 a 6
{
    int dado;
    srand(time(NULL));
    dado = rand() % 6 + 1;
    return dado;
}

int quemComeca2x2() // retorna 1 ou 2, se for 1 jogador1 cmç se 2 jogador2 cmç
{
    int comeca;
    srand(time(NULL));
    comeca = rand() % 2 + 1;
    return comeca;
}

int meioDeJogo2x2(jogo *jogo2x2, int a, int *inicio)
{

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

                    escolheDadoForaOrigem1(jogo2x2, *inicio);
                }
            }

            if (jogo2x2[0].dado2 != 6)
            {
                printf("\nDado-1: \n");

                escolheDadoForaOrigem2(jogo2x2, &inicio);
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
                    printf("\nDado-1: \n");

                    escolheDadoForaOrigem1(jogo2x2, &inicio);
                }
            }

            if (jogo2x2[1].dado2 != 6)
            {
                printf("\nDado-1: \n");

                escolheDadoForaOrigem2(jogo2x2, &inicio);
            }
        }
        else
        {
            printf("Passou a vez!\n");
            *inicio = 1;
        }
    }
}

int escolhaPeaoVermelhoDado1(jogo *jogo2x2, int *inicio) // colocar no V3
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover para a primeira casa: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {

        jogo2x2[0].percurso[0][0] = 1; // saiu da origem

        printf("Peao1-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, &inicio);
    }

    if (escolhaPeao == 2)
    {

        jogo2x2[0].percurso[1][0] = 1; // saiu da origem
        printf("Peao2-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, &inicio);
    }

    if (escolhaPeao == 3)
    {

        jogo2x2[0].percurso[2][0] = 1; // saiu da origem
        printf("Peao3-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, &inicio);
    }

    if (escolhaPeao == 4)
    {

        jogo2x2[0].percurso[3][0] = 1; // saiu da origem
        printf("Peao4-Vermelho saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(jogo2x2, &inicio);
    }
}

int escolhaPeaoVermelhoDado2(jogo *jogo2x2, int *inicio) // colocar no V3
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);

        printf("\nDado3: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, &inicio);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);

        printf("\nDado3: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, &inicio);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);

        printf("\nDado3: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, &inicio);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);

        printf("\nDado3: \n");
        escolhaPeaoVermelhoDado3(jogo2x2, &inicio);
    }
}

int escolhaPeaoVermelhoDado3(jogo *jogo2x2, int *inicio) // colocar no v3

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[0][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[1][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[2][1]);

        *inicio = 2;
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].percurso[3][1]);

        *inicio = 2;
    }
}

int escolhaPeaoAmareloDado1(jogo *jogo2x2, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {

        printf("Peao1-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, &inicio);
    }

    if (escolhaPeao == 2)
    {

        printf("Peao2-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, &inicio);
    }

    if (escolhaPeao == 3)
    {

        printf("Peao3-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, &inicio);
    }

    if (escolhaPeao == 4)
    {

        printf("Peao4-Amarelo saiu da origem! \n");

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(jogo2x2, &inicio);
    }
}

int escolhaPeaoAmareloDado2(jogo *jogo2x2, int *inicio)
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
        escolhaPeaoAmareloDado3(jogo2x2, &inicio);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[1][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, &inicio);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;

        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[2][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, &inicio);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;

        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].percurso[3][1]);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado3(jogo2x2, &inicio);
    }
}

int escolhaPeaoAmareloDado3(jogo *jogo2x2, int *inicio)

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

/* testes



*/