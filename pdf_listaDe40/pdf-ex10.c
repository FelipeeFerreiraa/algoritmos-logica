#include <stdio.h>

int main()
{
    float altura, pideal;
    char sexo;
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu sexo: (M = masculino / F = feminino)");
    scanf(" %c", &sexo);

    if (sexo == 'M')
    {
        pideal = (72.7 * altura) - 58;
        printf("Seu peso ideal e = %f", pideal);
    }
    else if (sexo == 'F')
    {
        pideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e = %f", pideal);
    }
    else {
        printf("Sexo INVALIDO!!");
    }
    return 0;
}