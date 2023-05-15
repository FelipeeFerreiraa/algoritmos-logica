#include <stdio.h>
int main()
{

    float a, b;
    int x, y, divisores, qnt = 0;

    printf("Digite um numero para iniciar um intervalo, e um para finalizar\n");
    printf("INICIO: \n");
    scanf("%f", &a);
    printf("FIM: \n");
    scanf("%f", &b);

    for (x = a + 1; x < b; x++)
    {
        divisores = 1;
        for (y = 2; y < x; y++)
        {
            if (x % y == 0)
            {
                divisores = 0; // se 6%2 == 0
            }
        }
        if (divisores == 1)
        {
            qnt++;
            printf("%d, ", x);
        }
    }

    printf("\nA quantidade de numeros primos eh = %d", qnt);

    return 0;
}