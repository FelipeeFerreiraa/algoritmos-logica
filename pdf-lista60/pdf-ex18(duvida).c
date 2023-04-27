#include <stdio.h>
int main()
{

    int num, maiorNum = 0, x = 1, numIguais = 0, aux;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &aux);

    while (x <= aux)
    {

        printf("numero %d: ", x);
        scanf("%d", &num);
        if (num > maiorNum)
        {
            maiorNum = num;

            if (num == maiorNum)
            {
                numIguais++;
            }
        }

        x++;
    }

    printf("O maior numero eh o %d e ele foi lido %d vezes.", maiorNum, numIguais);

    return 0;
}