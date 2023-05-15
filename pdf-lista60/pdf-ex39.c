#include <stdio.h>
int main()
{

    float base, altura, area;
    // a = (b*a) / 2

    do
    {
        printf("Digite o valor da [base] de um triangulo: ");
        scanf("%f", &base);

    } while (base <= 0);

    do
    {
        printf("Digite o valor da [altura] de um triangulo: ");
        scanf("%f", &altura);
    } while (altura <= 0);

    area = (base * altura) / 2;
    printf("altura do triangulo: %.2f\n", altura);
    printf("base do triangulo: %.2f\n", base);
    printf("A area do triangulo com os valores fornecidos eh = %.2f: ", area);

    return 0;
}