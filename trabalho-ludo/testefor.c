#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct jogo
{
    int dado1, dado2, dado3, jogador, p1, p2, p3, p4, percurso[4][2];

} jogo;

int girarDado();

int main()
{
    srand(time(NULL));
    int x = 0, y = 0;
    int caminho = 0, percurso[4][1];

    jogo jogo2x2[2];

    // origem dos peao e da primeira casa recebe zero
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            percurso[x][y] = 0;
        }
    } // Fiim origem dos peao e da primeira casa recebe zero

    do
    {
        for (int x = 0; x < 2; x++)
        {
            for (int z = 0; z < 4; z++)
            {
                for (int y = 0; y < 1; y++)
                {
                    if (percurso[z][y] == 0)
                    {

                        printf("-------------------------[Jogador %d], SUA VEZ  \n", x + 1);
                        jogo2x2[x].dado1 = girarDado(); // dado1 recebe valor do dado

                        printf("Dado-1 girado = %d\n", jogo2x2[0].dado1);

                        if (jogo2x2[x].dado1 == 6)
                        {
                            jogo2x2[x].dado2 = girarDado(); // dado2 recebe valor do dado
                            printf("Dado-2 girado = %d\n", jogo2x2[x].dado2);

                            if (jogo2x2[x].dado2 == 6)
                            {
                                jogo2x2[x].dado3 = girarDado(); // dado3 recebe valor do dado
                                printf("Dado-3 girado = %d\n", jogo2x2[x].dado3);

                                if (jogo2x2[x].dado3 != 6)
                                {
                                    printf("\nDado1:\n");
                                    percurso[z][y] = jogo2x2[x].dado3 + jogo2x2[x].dado2;
                                }
                            }

                            if (jogo2x2[0].dado2 != 6)
                            {
                                printf("\nDado2!=6 \n");
                                percurso[z][y] = jogo2x2[x].dado2;
                            }
                        }
                    }
                }
            }

            x++;
        }

    } while (percurso[x][y] < 58);

    return 0;
}

int girarDado() // gera um numero aleatorio de 1 a 6
{
    int dado;

    dado = rand() % 6 + 1;
    return dado;
}


/*

jogo2x2[0].percurso[0][0] < 1 || jogo2x2[0].percurso[1][0] < 1 || jogo2x2[0].percurso[2][0] < 1 || jogo2x2[0].percurso[3][0] < 1 || jogo2x2[1].percurso[0][0] < 1 || jogo2x2[1].percurso[1][0] < 1 || jogo2x2[1].percurso[2][0] < 1 || jogo2x2[1].percurso[3][0] < 1

*/