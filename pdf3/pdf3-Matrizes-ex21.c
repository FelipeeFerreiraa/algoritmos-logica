#include <stdio.h>
#include <strings.h>

int main()
{

    int matriz1[2][2], matriz2[2][2], escolha, matrizSoma[2][2] = {0}, matrizMenos[2][2] = {0}, constante, matriz1Constante[2][2] = {0}, matriz2Constante[2][2] = {0};

    // lendo matriz 1
    printf("Digite os elementos da primeira matriz 2x2: \n");
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            printf("linha %d, coluna %d: \n", x, y);
            scanf("%d", &matriz1[x][y]);
        }
    }

    // lendo matriz 2
    printf("Digite os elementos da segunda matriz 2x2: \n");
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            printf("linha %d, coluna %d: \n", x, y);
            scanf("%d", &matriz2[x][y]);
        }
    }

    do
    {
        printf("Escolha: \n [1] Para somar as duas matrizes \n [2] Para subtrair a primeira matriz da segunda \n [3] Para adicionar uma constante nas duas matrizes \n [4] Para imprimir as matrizes \n [0] Para sair \n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    matrizSoma[x][y] = matriz1[x][y] + matriz2[x][y];
                }
            }

            printf("\nMatrizes somadas: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matrizSoma[x][y]);
                }
                printf("\n");
            }
        }
        else if (escolha == 2)
        {
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    matrizMenos[x][y] = matriz2[x][y] - matriz1[x][y];
                }
            }

            printf("\nMatriz 2 menos a matriz 1: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matrizMenos[x][y]);
                }
                printf("\n");
            }
        }
        else if (escolha == 3)
        {
            printf("Digite um numero: \n");
            scanf("%d", &constante);
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    matriz1Constante[x][y] = matriz1[x][y] * constante;
                    matriz2Constante[x][y] = matriz2[x][y] * constante;
                }
            }

            printf("\nMatriz 1 com a constante: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matriz1Constante[x][y]);
                }
                printf("\n");
            }

            printf("\nMatriz 2 com a constante:: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matriz2Constante[x][y]);
                }
                printf("\n");
            }
        }
        else if (escolha == 4)
        {
            printf("\nMatriz 1: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matriz1[x][y]);
                }
                printf("\n");
            }

            printf("\nMatriz 2: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matriz2[x][y]);
                }
                printf("\n");
            }

            printf("\nMatrizes somadas: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matrizSoma[x][y]);
                }
                printf("\n");
            }

            printf("\nMatriz 2 menos a matriz 1: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matrizMenos[x][y]);
                }
                printf("\n");
            }

            printf("\nMatriz 1 com a constante: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matriz1Constante[x][y]);
                }
                printf("\n");
            }

            printf("\nMatriz 2 com a constante: \n");
            for (int x = 0; x < 2; x++)
            {
                for (int y = 0; y < 2; y++)
                {
                    printf("   %d   ", matriz2Constante[x][y]);
                }
                printf("\n");
            }
        }
    } while (escolha != 0);
    return 0;
}