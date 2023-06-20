#include <stdio.h>
#include <string.h>

float converterTemperatura(float a);

int main()
{

    float celsius;

    printf("Digite uma temperatura em graus celsius: \n");
    scanf("%f", &celsius);

    printf("A temperatura fornecida, em Fahrenheit eh = %.3f", converterTemperatura(celsius));

    return 0;
}

float converterTemperatura(float a)
{
    float farenheit;

    farenheit = a * (9.0 / 5.0) + 32.0;

    return farenheit;
}