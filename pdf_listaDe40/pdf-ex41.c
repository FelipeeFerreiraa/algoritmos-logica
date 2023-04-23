#include <stdio.h>
int main()
{

    float altura, peso, imc;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu peso em Kg: ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);
    printf("O indice de massa corporal encontrado com a altura e o peso fornecidos sera:  %.2f \n", imc);

    if (imc < 18.5)
    {
        printf("ABAIXO-DO-PESO!");
    }
    else if (imc >= 18.6 && imc <= 24.9)
    {
        printf("SAUDAVEL!");
    } else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("PESO-EM-EXCESSO!");
    } else if (imc >= 30.0 && imc <= 34.9)
    {
        printf("OBESIDADE-GRAU-I");
    } else if (imc >= 35.0 && imc <= 39.9)
    {
        printf("OBESIDADE-GRAU-II (severa)!");
    } else if (imc >= 40.0)
    {
        printf("OBESIDADE-GRAU-III (morbida)!");
    }

    return 0;
}