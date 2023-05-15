#include <stdio.h>
#include <math.h>
int main()
{

    float num;

    do
    {
        printf("Digite um valor: \n");
        scanf("%f", &num);

        if (num <= 0)
        {
            printf("Finalizando entrada de dados");
            break;
        }

        printf("O quadrado = [%f]\n", num * num);
        printf("O cubo = [%f]\n", num * num * num);
        printf("A raiz = [%f]\n", sqrt(num));
        printf("Proximo Numero\n\n");

    } while (num > 0);

    return 0;
}