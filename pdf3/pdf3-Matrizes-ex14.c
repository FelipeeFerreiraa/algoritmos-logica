#include <stdio.h>
#include <time.h>
int main()
{

    int cartela[5][5] = {0}, k, numeros[100];

    // gerando cartela do bungo
    for (int i = 0; i < 100; i++)
    {
        numeros[i] = i;
    }

    srand(time(NULL));

    for (int z = 0; z < 5; z++)
    {
        for (int y = 0; y < 5; y++)
        {
            k = rand() % (100 - z * 5 - y);
            cartela[z][y] = numeros[k];
            numeros[k] = numeros[100 - z * 5 - y - 1];
        }
    }

    // exubindo cartela do bingo
    printf("Cartela do bingo: \n");
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("   %2d   ", cartela[x][y]);
        }
        printf("\n");
    }

    return 0;
}