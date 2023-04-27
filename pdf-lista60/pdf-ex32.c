#include <stdio.h>
#include <time.h>
int main()
{
    int d1, d2, nVezes, jogadas = 1;
    printf("Digite um numero: ");
    scanf("%d", &nVezes);

    srand(time(NULL));
    while (jogadas <= nVezes)
    {

        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("Dado 1: %d \n", d1);
        printf("Dado 2: %d \n", d2);
        if (d1 == d2)
        {
            printf("%d = %d\n", d1, d2);
        }
        else if (d1 > d2)
        {
            printf("%d > %d\n", d1, d2);
        }
        else if (d1 < d2)
        {
            printf("%d < %d\n", d1, d2);
        }
        printf("Fim do %d lancamento!\n\n", jogadas);

        jogadas++;
    }

    return 0;
}