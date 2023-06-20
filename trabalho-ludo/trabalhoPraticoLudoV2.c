#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct jogo
{
    int dado1, dado2, dado3, jogador, p1, p2, p3, p4, percurso[4][1];

} jogo;

int girarDado();
int quemComeca2x2();

int main()
{
    int escolhaModo;

    printf("----Jogo: Ludo Titan----\n");

    do
    {
        printf("Escolha qual modo deseja jogar:\n[1] para 2x2\n[2] para 4x4\n");
        scanf("%d", &escolhaModo);
    } while (escolhaModo != 2 && escolhaModo != 1);

    if (escolhaModo == 1) // jogo 2x2   (vermelho vs Amarelo)
    {
        jogo jogo2x2[2];
        int inicio = quemComeca2x2(), x;
        int escolhaPeao;

        do
        {
            if (inicio == 1)
            {
                printf("[Jogador 1], SUA VEZ (vermelho) \n");

                jogo2x2[0].dado1 = girarDado(); // dado1 recebe valor do dado

                printf("Dado1 girado = %d\n", jogo2x2[0].dado1);

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
                            printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho");
                            scanf("%d", &escolhaPeao);

                            if (escolhaPeao == 1)
                            {
                                printf("Peao1-Vermelho iniciou a corrida! (casa1)\n");
                                jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                                printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                jogo2x2[0].percurso[0][0] = jogo2x2[0].jogador;
                                jogo2x2[0].p1 = jogo2x2[0].jogador;

                                inicio = 2;
                            }
                            if (escolhaPeao == 2)
                            {
                                printf("Peao2-Vermelho iniciou a corrida! (casa1)\n");
                                jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                                printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                jogo2x2[0].percurso[1][0] = jogo2x2[0].jogador;
                                jogo2x2[0].p2 = jogo2x2[0].jogador;

                                inicio = 2;
                            }
                            if (escolhaPeao == 3)
                            {
                                printf("Peao3-Vermelho iniciou a corrida! (casa1)\n");
                                jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                                printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                jogo2x2[0].percurso[2][0] = jogo2x2[0].jogador;
                                jogo2x2[0].p3 = jogo2x2[1].jogador;

                                inicio = 2;
                            }
                            if (escolhaPeao == 4)
                            {
                                printf("Peao4-Vermelho iniciou a corrida! (casa1)\n");
                                jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                                printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                jogo2x2[0].percurso[3][0] = jogo2x2[0].jogador;
                                jogo2x2[0].p4 = jogo2x2[1].jogador;

                                inicio = 2;
                            }
                        }
                    }

                    if (jogo2x2[0].dado2 != 6)
                    {
                        printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                        scanf("%d", &escolhaPeao);
                    }

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Vermelho iniciou a corrida! (casa1)\n");
                    }
                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Vermelho iniciou a corrida! (casa1)\n");
                    }
                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Vermelho iniciou a corrida! (casa1)\n");
                    }
                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Vermelho iniciou a corrida! (casa1)\n");
                    }
                }
                else
                {
                    printf("Passou a vez!\n");
                    inicio = 2;
                }
            }
            if (inicio == 2)
            {
                printf("[Jogador 2], SUA VEZ (amarelo) \n");

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
                            printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                            scanf("%d", &escolhaPeao);

                            if (escolhaPeao == 1)
                            {
                                printf("Peao1-Amarelo iniciou a corrida! (casa1)\n");
                                jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                jogo2x2[1].percurso[0][0] = jogo2x2[1].jogador;
                                jogo2x2[1].p1 = jogo2x2[1].jogador;
                                inicio = 2;
                            }
                            if (escolhaPeao == 2)
                            {
                                printf("Peao2-Amarelo iniciou a corrida! (casa1)\n");
                                jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[1][0] = jogo2x2[1].jogador;
                                jogo2x2[1].p2 = jogo2x2[1].jogador;
                                inicio = 2;
                            }
                            if (escolhaPeao == 3)
                            {
                                printf("Peao3-Amarelo iniciou a corrida! (casa1)\n");
                                jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                jogo2x2[1].percurso[2][0] = jogo2x2[1].jogador;
                                jogo2x2[1].p3 = jogo2x2[1].jogador;
                                inicio = 2;
                            }
                            if (escolhaPeao == 4)
                            {
                                printf("Peao4-Amarelo iniciou a corrida! (casa1)\n");
                                jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[3][0] = jogo2x2[1].jogador;
                                jogo2x2[1].p4 = jogo2x2[1].jogador;
                                inicio = 2;
                            }
                        }
                    }

                    if (jogo2x2[1].dado2 != 6)
                    {
                        printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);
                    }

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Amarelo iniciou a corrida! (casa1)\n");
                    }
                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Amarelo iniciou a corrida! (casa1)\n");
                    }
                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Amarelo iniciou a corrida! (casa1)\n");
                    }
                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Amarelo iniciou a corrida! (casa1)\n");
                    }
                }
                else
                {
                    printf("Passou a vez!\n");
                    inicio = 1;
                }
            }

            x++;

        } while (jogo2x2[1].percurso[0][0] != 57 || jogo2x2[1].percurso[1][0] != 57 ||jogo2x2[1].percurso[2][0] != 57 ||jogo2x2[1].percurso[3][0] != 57 ||jogo2x2[1].percurso[0][1] != 57 ||jogo2x2[0].percurso[0] != 57);  // parei aq
    }

    if (escolhaModo == 2) // jogo 4x4
    {
    }
}

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

/* testes



*/