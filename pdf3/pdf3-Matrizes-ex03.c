#include <stdio.h>
int main()
{

    int matriz[4][4];

    // matriz indiceLinha*indiceColuna
    printf("\n\nMatriz: \n");
    for (int f = 0; f < 4; f++)
    {

        for (int c = 0; c < 4; c++)
        {

            matriz[f][c] = (f * c); // indiceLinha*indiceColuna

            printf("    %d    ", matriz[f][c]);
        }
        printf("\n");
    }

    return 0;
}