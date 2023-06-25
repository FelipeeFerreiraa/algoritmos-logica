int inicio2x2(jogo *jogo2x2, int a, int *inicio, jogo *jogo2x2.percurso)
{

    if (inicio == 1)
    {
        printf("[Jogador 1], SUA VEZ (vermelho) \n");

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
                    inicio = 2; // passa a vez
                }
                if (jogo2x2[0].dado3 != 6)
                {
                    printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                    scanf("%d", &escolhaPeao);

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Vermelho iniciou a corrida! (casa1)\n");
                        jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                        printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                        jogo2x2[0].percurso[0][0] = 1; // peao1 saiu da origem
                        jogo2x2[0].p1 = jogo2x2[0].jogador;

                        inicio = 2; // passa a vez
                    }
                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Vermelho iniciou a corrida! (casa1)\n");
                        jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                        printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                        jogo2x2[0].percurso[1][0] = 1; // peao2 saiu da origem
                        jogo2x2[0].p2 = jogo2x2[0].jogador;

                        inicio = 2; // passa a vez
                    }
                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Vermelho iniciou a corrida! (casa1)\n");
                        jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                        printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                        jogo2x2[0].percurso[2][0] = 1; // peao3 saiu da origem
                        jogo2x2[0].p3 = jogo2x2[1].jogador;

                        inicio = 2; // passa a vez
                    }
                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Vermelho iniciou a corrida! (casa1)\n");
                        jogo2x2[0].jogador = jogo2x2[0].dado3 + jogo2x2[0].dado2;
                        printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                        jogo2x2[0].percurso[3][0] = 1; // peao4 saiu da origem
                        jogo2x2[0].p4 = jogo2x2[1].jogador;

                        inicio = 2; // passa a vez
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
                jogo2x2[0].jogador = jogo2x2[0].dado2;
                printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                jogo2x2[0].percurso[0][0] = 1; // peao1 saiu da origem
                jogo2x2[0].p2 = jogo2x2[0].jogador;

                inicio = 2; // passa a vez
            }
            if (escolhaPeao == 2)
            {
                printf("Peao2-Vermelho iniciou a corrida! (casa1)\n");
                jogo2x2[0].jogador = jogo2x2[0].dado2;
                printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                jogo2x2[0].percurso[1][0] = 1; // peao2 saiu da origem
                jogo2x2[0].p2 = jogo2x2[0].jogador;

                inicio = 2; // passa a vez
            }
            if (escolhaPeao == 3)
            {
                printf("Peao3-Vermelho iniciou a corrida! (casa1)\n");
                jogo2x2[0].jogador = jogo2x2[0].dado2;
                printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                jogo2x2[0].percurso[2][0] = 1; // peao3 saiu da origem
                jogo2x2[0].p2 = jogo2x2[0].jogador;

                inicio = 2; // passa a vez
            }
            if (escolhaPeao == 4)
            {
                printf("Peao4-Vermelho iniciou a corrida! (casa1)\n");
                jogo2x2[0].jogador = jogo2x2[0].dado2;
                printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                jogo2x2[0].percurso[3][0] = 1; // peao4 saiu da origem
                jogo2x2[0].p4 = jogo2x2[0].jogador;

                inicio = 2; // passa a vez
            }
        }

        else
        {
            printf("Passou a vez!\n");
            inicio = 2; // passa a vez
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
                    inicio = 1; // passa a vez
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
                        jogo2x2[1].percurso[0][0] = 1;
                        jogo2x2[1].p1 = jogo2x2[1].jogador;
                        inicio = 1; // passa a vez
                    }
                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Amarelo iniciou a corrida! (casa1)\n");
                        jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[1][0] = 1;
                        jogo2x2[1].p2 = jogo2x2[1].jogador;
                        inicio = 1; // passa a vez
                    }
                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Amarelo iniciou a corrida! (casa1)\n");
                        jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                        jogo2x2[1].percurso[2][0] = 1;
                        jogo2x2[1].p3 = jogo2x2[1].jogador;
                        inicio = 1;
                    }
                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Amarelo iniciou a corrida! (casa1)\n");
                        jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[3][0] = 1;
                        jogo2x2[1].p4 = jogo2x2[1].jogador;
                        inicio = 1; // passa a vez
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
                jogo2x2[1].jogador = jogo2x2[1].dado2;
                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[0][0] = 1;
                jogo2x2[1].p1 = jogo2x2[1].jogador;
                inicio = 1;
            }
            if (escolhaPeao == 2)
            {
                printf("Peao2-Amarelo iniciou a corrida! (casa1)\n");
                jogo2x2[1].jogador = jogo2x2[1].dado2;
                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[1][0] = 1;
                jogo2x2[1].p2 = jogo2x2[1].jogador;
                inicio = 1; // passa a vez
            }
            if (escolhaPeao == 3)
            {
                printf("Peao3-Amarelo iniciou a corrida! (casa1)\n");
                jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[2][0] = 1;
                jogo2x2[1].p3 = jogo2x2[1].jogador;
                inicio = 1; // passa a vez
            }
            if (escolhaPeao == 4)
            {
                printf("Peao4-Amarelo iniciou a corrida! (casa1)\n");
                jogo2x2[1].jogador = jogo2x2[1].dado3 + jogo2x2[1].dado2;
                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[3][0] = 1;
                jogo2x2[1].p4 = jogo2x2[1].jogador;
                inicio = 1; // passa a vez
            }
        }
        else
        {
            printf("Passou a vez!\n");
            inicio = 1;
        }
    }
}

/*

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


-------------------------
*/

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
                printf("Dado-3: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                scanf("%d", &escolhaPeao);

                if (escolhaPeao == 1)
                {
                    printf("Peao1-Amarelo \n");
                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                    printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                    jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                    jogo2x2[1].p1 = jogo2x2[1].jogador;

                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                    scanf("%d", &escolhaPeao);

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    inicio = 1;
                }
                if (escolhaPeao == 2)
                {
                    printf("Peao2-Amarelo \n");
                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                    printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                    jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                    jogo2x2[1].p2 = jogo2x2[1].jogador;

                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                    scanf("%d", &escolhaPeao);

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    inicio = 1;
                }
                if (escolhaPeao == 3)
                {
                    printf("Peao3-Amarelo \n");
                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                    printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                    jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao3 saiu da origem
                    jogo2x2[1].p3 = jogo2x2[1].jogador;

                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                    scanf("%d", &escolhaPeao);

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    inicio = 1;
                }
                if (escolhaPeao == 4)
                {
                    printf("Peao4-Amarelo \n");
                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                    printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                    jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao4 saiu da origem
                    jogo2x2[1].p4 = jogo2x2[1].jogador;

                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                    scanf("%d", &escolhaPeao);

                    if (escolhaPeao == 1)
                    {
                        printf("Peao1-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 2)
                    {
                        printf("Peao2-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 3)
                    {
                        printf("Peao3-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    if (escolhaPeao == 4)
                    {
                        printf("Peao4-Amarelo \n");
                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                        scanf("%d", &escolhaPeao);

                        if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                        }
                    }

                    inicio = 1;
                }
            }
        }

        if (jogo2x2[1].dado2 != 6)
        {
            printf("Dado-2: Escolha qual peao voce quer mover no percurso: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
            scanf("%d", &escolhaPeao);
        }

        if (escolhaPeao == 1)
        {
            printf("Peao1-Amarelo \n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
            jogo2x2[1].percurso[0][1] = jogo2x2[1].jogador; // peao1 saiu da origem
            jogo2x2[1].p2 = jogo2x2[1].jogador;

            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
            scanf("%d", &escolhaPeao);

            if (escolhaPeao == 1)
            {
                printf("Peao1-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p1 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 2)
            {
                printf("Peao2-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p2 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 3)
            {
                printf("Peao3-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p3 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 4)
            {
                printf("Peao4-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p4 = jogo2x2[1].jogador;
            }

            inicio = 1;
        }
        if (escolhaPeao == 2)
        {
            printf("Peao2-Amarelo \n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
            jogo2x2[1].percurso[1][1] = jogo2x2[1].jogador; // peao2 saiu da origem
            jogo2x2[1].p2 = jogo2x2[1].jogador;

            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
            scanf("%d", &escolhaPeao);

            if (escolhaPeao == 1)
            {
                printf("Peao1-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p1 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 2)
            {
                printf("Peao2-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p2 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 3)
            {
                printf("Peao3-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p3 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 4)
            {
                printf("Peao4-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p4 = jogo2x2[1].jogador;
            }

            inicio = 1;
        }
        if (escolhaPeao == 3)
        {
            printf("Peao3-Amarelo \n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
            jogo2x2[1].percurso[2][1] = jogo2x2[1].jogador; // peao3 saiu da origem
            jogo2x2[1].p3 = jogo2x2[1].jogador;

            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
            scanf("%d", &escolhaPeao);

            if (escolhaPeao == 1)
            {
                printf("Peao1-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p1 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 2)
            {
                printf("Peao2-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p2 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 3)
            {
                printf("Peao3-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p3 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 4)
            {
                printf("Peao4-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p4 = jogo2x2[1].jogador;
            }

            inicio = 1;
        }
        if (escolhaPeao == 4)
        {
            printf("Peao4-Amarelo \n");
            jogo2x2[1].jogador = jogo2x2[1].dado2;
            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
            jogo2x2[1].percurso[3][1] = jogo2x2[1].jogador; // peao4 saiu da origem
            jogo2x2[1].p4 = jogo2x2[1].jogador;

            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
            scanf("%d", &escolhaPeao);

            if (escolhaPeao == 1)
            {
                printf("Peao1-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p1 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 2)
            {
                printf("Peao2-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p2 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 3)
            {
                printf("Peao3-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p3 = jogo2x2[1].jogador;
            }
            if (escolhaPeao == 4)
            {
                printf("Peao4-Amarelo \n");
                jogo2x2[1].jogador = jogo2x2[1].dado1;
                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                jogo2x2[1].p4 = jogo2x2[1].jogador;
            }

            inicio = 1;
        }
    }

    else
    {
        printf("Passou a vez!\n");
        inicio = 1;
    }
}

/// funcao para escolher os peoes----------------------------

int escolhaPeaoVermelhoDado3(jogo *jogo2x2)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        jogo2x2[0].p1 += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(*jogo2x2);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        jogo2x2[0].p2 += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(*jogo2x2);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        jogo2x2[0].p3 += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(*jogo2x2);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado3;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        jogo2x2[0].p4 += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado2: \n");
        escolhaPeaoVermelhoDado2(*jogo2x2);
    }
}

int escolhaPeaoVermelhoDado2(jogo *jogo2x2)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        jogo2x2[0].p1 += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado1(jogo * jogo2x2);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        jogo2x2[0].p2 += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado1(jogo * jogo2x2);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        jogo2x2[0].p3 += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado1(jogo * jogo2x2);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado2;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        jogo2x2[0].p4 += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);

        printf("\nDado1: \n");
        escolhaPeaoVermelhoDado1(jogo * jogo2x2);
    }
}

int escolhaPeaoVermelhoDado1(jogo *jogo2x2)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador;
        jogo2x2[0].p1 += jogo2x2[0].jogador;
        printf("Peao1-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador;
        jogo2x2[0].p2 += jogo2x2[0].jogador;
        printf("Peao2-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador;
        jogo2x2[0].p3 += jogo2x2[0].jogador;
        printf("Peao3-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[0].jogador = jogo2x2[0].dado1;
        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador;
        jogo2x2[0].p4 += jogo2x2[0].jogador;
        printf("Peao4-Vermelho esta na casa %d do percurso! \n", jogo2x2[0].jogador);
    }
}

/*

 if (escolhaPeao == 1)
                                {
                                    printf("Peao1-Vermelho \n");
                                    jogo2x2[0].jogador = jogo2x2[0].dado3;
                                    printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                    jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                    jogo2x2[0].p1 += jogo2x2[0].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p1 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao2 saiu da origem
                                        jogo2x2[0].p2 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p3 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p4 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    inicio = 2;
                                }
                                if (escolhaPeao == 2)
                                {
                                    printf("Peao2-Vermelho \n");
                                    jogo2x2[0].jogador = jogo2x2[0].dado3;
                                    printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                    jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao2 saiu da origem
                                    jogo2x2[0].p2 = jogo2x2[0].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p1 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao2 saiu da origem
                                        jogo2x2[0].p2 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p3 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p4 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    inicio = 2;
                                }
                                if (escolhaPeao == 3)
                                {
                                    printf("Peao3-Vermelho \n");
                                    jogo2x2[0].jogador = jogo2x2[0].dado3;
                                    printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                    jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao3 saiu da origem
                                    jogo2x2[0].p3 = jogo2x2[1].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p1 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao2 saiu da origem
                                        jogo2x2[0].p2 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p3 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p4 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    inicio = 2;
                                }
                                if (escolhaPeao == 4)
                                {
                                    printf("Peao4-Vermelho \n");
                                    jogo2x2[0].jogador = jogo2x2[0].dado3;
                                    printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                    jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao4 saiu da origem
                                    jogo2x2[0].p4 = jogo2x2[1].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p1 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao2 saiu da origem
                                        jogo2x2[0].p2 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p3 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Vermelho \n");
                                        jogo2x2[0].jogador = jogo2x2[0].dado2;
                                        printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                        jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                        jogo2x2[0].p4 = jogo2x2[0].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao1-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[0][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p1 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao3-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[2][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p3 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Vermelho \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao4-Vermelho moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[3][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p4 = jogo2x2[0].jogador;
                                        }
                                    }

                                    inicio = 2;
                                }






                                if (escolhaPeao == 1)
                                {
                                    printf("Peao1-Amarelo \n");
                                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                                    printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                    jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                    jogo2x2[1].p1 = jogo2x2[1].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    inicio = 1;
                                }
                                if (escolhaPeao == 2)
                                {
                                    printf("Peao2-Amarelo \n");
                                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                                    printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                    jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                                    jogo2x2[1].p2 = jogo2x2[1].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[0].jogador = jogo2x2[0].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[0].jogador);
                                            jogo2x2[0].percurso[1][1] += jogo2x2[0].jogador; // peao1 saiu da origem
                                            jogo2x2[0].p2 = jogo2x2[0].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    inicio = 1;
                                }
                                if (escolhaPeao == 3)
                                {
                                    printf("Peao3-Amarelo \n");
                                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                                    printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                    jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao3 saiu da origem
                                    jogo2x2[1].p3 = jogo2x2[1].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    inicio = 1;
                                }
                                if (escolhaPeao == 4)
                                {
                                    printf("Peao4-Amarelo \n");
                                    jogo2x2[1].jogador = jogo2x2[1].dado3;
                                    printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                    jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao4 saiu da origem
                                    jogo2x2[1].p4 = jogo2x2[1].jogador;

                                    printf("Dado-2: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                    scanf("%d", &escolhaPeao);

                                    if (escolhaPeao == 1)
                                    {
                                        printf("Peao1-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p1 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 2)
                                    {
                                        printf("Peao2-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao2 saiu da origem
                                        jogo2x2[1].p2 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 3)
                                    {
                                        printf("Peao3-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p3 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    if (escolhaPeao == 4)
                                    {
                                        printf("Peao4-Amarelo \n");
                                        jogo2x2[1].jogador = jogo2x2[1].dado2;
                                        printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                        jogo2x2[1].p4 = jogo2x2[1].jogador;

                                        printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                                        scanf("%d", &escolhaPeao);

                                        if (escolhaPeao == 1)
                                        {
                                            printf("Peao1-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p1 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 2)
                                        {
                                            printf("Peao2-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p2 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 3)
                                        {
                                            printf("Peao3-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p3 = jogo2x2[1].jogador;
                                        }
                                        if (escolhaPeao == 4)
                                        {
                                            printf("Peao4-Amarelo \n");
                                            jogo2x2[1].jogador = jogo2x2[1].dado1;
                                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                            jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                            jogo2x2[1].p4 = jogo2x2[1].jogador;
                                        }
                                    }

                                    inicio = 1;
                                }



if (escolhaPeao == 1)
                        {
                            printf("Peao1-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado2;
                            printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[0][1] = jogo2x2[1].jogador; // peao1 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;

                            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                            scanf("%d", &escolhaPeao);

                            if (escolhaPeao == 1)
                            {
                                printf("Peao1-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p1 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 2)
                            {
                                printf("Peao2-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p2 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 3)
                            {
                                printf("Peao3-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p3 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 4)
                            {
                                printf("Peao4-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p4 = jogo2x2[1].jogador;
                            }

                            inicio = 1;
                        }
                        if (escolhaPeao == 2)
                        {
                            printf("Peao2-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado2;
                            printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[1][1] = jogo2x2[1].jogador; // peao2 saiu da origem
                            jogo2x2[1].p2 = jogo2x2[1].jogador;

                            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                            scanf("%d", &escolhaPeao);

                            if (escolhaPeao == 1)
                            {
                                printf("Peao1-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p1 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 2)
                            {
                                printf("Peao2-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p2 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 3)
                            {
                                printf("Peao3-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p3 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 4)
                            {
                                printf("Peao4-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p4 = jogo2x2[1].jogador;
                            }

                            inicio = 1;
                        }
                        if (escolhaPeao == 3)
                        {
                            printf("Peao3-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado2;
                            printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[2][1] = jogo2x2[1].jogador; // peao3 saiu da origem
                            jogo2x2[1].p3 = jogo2x2[1].jogador;

                            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                            scanf("%d", &escolhaPeao);

                            if (escolhaPeao == 1)
                            {
                                printf("Peao1-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p1 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 2)
                            {
                                printf("Peao2-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p2 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 3)
                            {
                                printf("Peao3-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p3 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 4)
                            {
                                printf("Peao4-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p4 = jogo2x2[1].jogador;
                            }

                            inicio = 1;
                        }
                        if (escolhaPeao == 4)
                        {
                            printf("Peao4-Amarelo \n");
                            jogo2x2[1].jogador = jogo2x2[1].dado2;
                            printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                            jogo2x2[1].percurso[3][1] = jogo2x2[1].jogador; // peao4 saiu da origem
                            jogo2x2[1].p4 = jogo2x2[1].jogador;

                            printf("Dado-1: Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
                            scanf("%d", &escolhaPeao);

                            if (escolhaPeao == 1)
                            {
                                printf("Peao1-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao1-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p1 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 2)
                            {
                                printf("Peao2-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao2-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p2 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 3)
                            {
                                printf("Peao3-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao3-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p3 = jogo2x2[1].jogador;
                            }
                            if (escolhaPeao == 4)
                            {
                                printf("Peao4-Amarelo \n");
                                jogo2x2[1].jogador = jogo2x2[1].dado1;
                                printf("Peao4-Amarelo moveu %d casas no percurso! \n", jogo2x2[1].jogador);
                                jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador; // peao1 saiu da origem
                                jogo2x2[1].p4 = jogo2x2[1].jogador;
                            }

                            inicio = 1;
                        }
                    }
*/

int escolhaPeaoAmareloDado3(jogo *jogo2x2, int *inicio)
{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
        jogo2x2[1].p1 += jogo2x2[1].jogador;
        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(*jogo2x2);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        jogo2x2[1].p2 += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(*jogo2x2);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
        jogo2x2[1].p3 += jogo2x2[1].jogador;
        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(*jogo2x2);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado3;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
        jogo2x2[1].p4 += jogo2x2[1].jogador;
        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado2: \n");
        escolhaPeaoAmareloDado2(*jogo2x2);
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
        jogo2x2[1].p1 += jogo2x2[1].jogador;
        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado1: \n");
        escolhaPeaoAmareloDado1(jogo * jogo2x2);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        jogo2x2[1].p2 += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado1: \n");
        escolhaPeaoAmareloDado1(jogo * jogo2x2);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
        jogo2x2[1].p3 += jogo2x2[1].jogador;
        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado1: \n");
        escolhaPeaoAmareloDado1(jogo * jogo2x2);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado2;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
        jogo2x2[1].p4 += jogo2x2[1].jogador;
        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);

        printf("\nDado1: \n");
        escolhaPeaoAmareloDado1(jogo * jogo2x2);
    }
}

int escolhaPeaoAmareloDado1(jogo *jogo2x2, int *inicio)

{
    int escolhaPeao;
    printf("Escolha qual peao voce quer mover: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo\n");
    scanf("%d", &escolhaPeao);

    if (escolhaPeao == 1)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[0][1] += jogo2x2[1].jogador;
        jogo2x2[1].p1 += jogo2x2[1].jogador;
        printf("Peao1-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);
    }

    if (escolhaPeao == 2)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[1][1] += jogo2x2[1].jogador;
        jogo2x2[1].p2 += jogo2x2[1].jogador;
        printf("Peao2-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);
    }

    if (escolhaPeao == 3)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[2][1] += jogo2x2[1].jogador;
        jogo2x2[1].p3 += jogo2x2[1].jogador;
        printf("Peao3-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);
    }

    if (escolhaPeao == 4)
    {
        jogo2x2[1].jogador = jogo2x2[1].dado1;
        jogo2x2[1].percurso[3][1] += jogo2x2[1].jogador;
        jogo2x2[1].p4 += jogo2x2[1].jogador;
        printf("Peao4-Amarelo esta na casa %d do percurso! \n", jogo2x2[1].jogador);
    }
}

/*
int escolhaPeaoAmareloDado3(jogo2x2, 0);
int escolhaPeaoAmareloDado2(jogo2x2, 0);
int escolhaPeaoAmareloDado1(jogo2x2, 0);
*/
