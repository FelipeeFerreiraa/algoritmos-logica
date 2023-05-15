#include <stdio.h>
int main()
{

    int vetor[10], x = 0, num;

    printf("Digite dez numeros diferentes: \n");

    do
    {

        printf("Numero %d: ", x + 1);
        scanf("%d", &num);
        vetor[x] = num;

        for (int w = 0; w < x; w++)
        {

            if (vetor[w] == num)
            {
                printf("Digite outro numero: (numero repetido)\n");
                x--;
                break;
            }

            if (w == x)
            {
                vetor[x] = num;
            }
        }

        x++;
    } while (x < 10);

    printf("Array: \n");
    for (int y = 0; y < 10; y++)
    {

        printf("%d,", vetor[y]);
    }

    return 0;
}