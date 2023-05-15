#include <stdio.h>
int main()
{

    float a, b, soma = 0;
    int x, y, divisores;

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
                divisores = 0;  //se 6%2 == 0
            }
        }
        if (divisores == 1)
        {
            soma = soma + x;
            printf("%d, ", x); 
        }
    }

    printf("\nA soma dos numeros primos presentes entre o intervalo eh = %.2f", soma);

    return 0;
}