#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct tabuleiro2x2
{
    char peoes[4][20];
    int jogador;
} tabuleiro2x2;

int girarDado();
int quemComeca2x2();

//-------------main
int main()
{

    int escolhaModo;
    tabuleiro2x2 jogo2x2[2] = {{{"Peao1-Vermelho", "Peao2-Vermelho", "Peao3-Vermelho", "Peao4-Vermelho"}, 1}, {{"Peao1-Amarelo", "Peao2-Amarelo", "Peao3-Amarelo", "Peao4-Amarelo"}, 2}};

    printf("----Jogo: Ludo Titan----\n");

    do
    {
        printf("Escolha qual modo deseja jogar:\n[1] para 2x2\n[2] para 4x4\n");
        scanf("%d", &escolhaModo);
    } while (escolhaModo != 2 && escolhaModo != 1);

    if (escolhaModo == 1) // jogo 2x2   (vermelho vs Amarelo)
    {
        int dadoAmarelo, dadoVermelho, inicio, escolhaPeaoDaJogada;
        char percursoVermelho[57], percursoAmarelo[57];

        inicio = quemComeca2x2();

        do
        {

            if (inicio == 1)
            {

                dadoVermelho = girarDado();
                if (dadoVermelho == 6)
                {
                    printf("Jogador de Vermelho voce comeca!\n");
                    printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Vermelho\n[2] peao2-Vermelho\n[3] peao3-Vermelho\n[4] peao4-Vermelho");
                    scanf("%d", &escolhaPeaoDaJogada);
                }
                else
                {
                    dadoAmarelo = girarDado();
                }
            }

            if (inicio == 2)
            {
                dadoAmarelo = girarDado();
                if (dadoAmarelo == 6)
                {
                    printf("Jogador de Amarelo voce comeca!\n");
                    printf("Escolha qual peao voce quer mover para a primeira casa do percurso: \n[1] peao1-Amarelo\n[2] peao2-Amarelo\n[3] peao3-Amarelo\n[4] peao4-Amarelo");
                    scanf("%d", &escolhaPeaoDaJogada);
                }
                else
                {
                    dadoVermelho = girarDado();
                }
            }

        } while (dadoAmarelo != 6 || dadoVermelho != 6);
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

int jogadaFeita()
{
}