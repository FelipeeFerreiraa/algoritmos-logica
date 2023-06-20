#include <stdio.h>
#include <strings.h>
#include <time.h>

struct cartasBaralho
{
    int valor;
    int naipe; // 1=Ouros, 2=Copas, 3=Espadas, 4=Paus
};

int main()
{
    srand(time(NULL));
    struct cartasBaralho jogo1[10] = {
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1},
        {rand() % 13 + 1, rand() % 4 + 1}};
    ;

    for (int y = 0; y < 10; y++)
    {

        if (y <= 4)
        {
            printf("\n----carta %d, Jogador 1:  \n", y + 1);
        }
        else if (y >= 5)
        {
            printf("\n----carta %d, Jogador 2:  \n", y + 1);
        }

        switch (jogo1[y].valor)
        {
        case 11:
            printf("Valete-J de ");
            break;

        case 12:
            printf("Rainha-Q de ");
            break;
        case 13:
            printf("Rei-K de ");
            break;
        case 1:
            printf("As-1 de ");
            break;

        default:
            printf("%d de ", jogo1[y].valor);
            break;
        }

        switch (jogo1[y].naipe)
        {
        case 1:
            printf("Ouros");
            break;

        case 2:
            printf("Copas");
            break;
        case 3:
            printf("Espadas");
            break;
        case 4:
            printf("Paus");
            break;
        }
    }

    return 0;
}