#include <stdio.h>
#include <math.h>
int main()
{
    float numero, base10, lognatural;
    printf("Digite um numero inteito: ");
    scanf("%f", &numero);
    if (numero < 0)
    {
        printf("Numero INVALIDO!!!");
    }
    else
    {
        base10 = log10(numero);
        lognatural = log(numero);
        printf(" O numero fornecido foi %.3f\n O log na base10 do numero eh %.3f\n O logNatural eh %.3f", numero, base10, lognatural);
    }
    return 0;
}