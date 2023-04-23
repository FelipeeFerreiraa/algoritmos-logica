#include <stdio.h>
int main()
{
    float km, litros, km_litro;
    printf("Digite a 'distancia em Km' e a  'quantidade de litros' de gasolina comsumidos pelo seu carro em determinado percurso.");
    scanf("%f %f", &km, &litros);

    km_litro = km / litros;
    if (km_litro < 8)
    {
        printf("Venda o carro! (Km/litro muito baixo)");
    }
    else if (km_litro >= 8 && km_litro <= 11.9)
    {
        printf("Economico! (Km/litro razoavel)");
    }
    else if (km_litro > 12)
    {
        printf("Super Economico! (Km/litro alto)");
    }

    return 0;
}