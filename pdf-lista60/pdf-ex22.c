#include <stdio.h>
int main()
{
    float notas, aux = 0, divisor = 0;

    do
    {
        printf("Digite suas notas (validas de 10 a 20):  ");
        scanf("%f", &notas);
        divisor++;
        aux = notas + aux;
    } while (notas >= 10 && notas <= 20);

    divisor = divisor - 1;
    printf("A media de suas notas sera %.2f \n", aux / divisor);
    printf("%.2f foi as notas somadas, %.0f total de notas digitadas", aux, divisor);

    return 0;
}