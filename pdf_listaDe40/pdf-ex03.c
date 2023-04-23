#include <stdio.h>
#include <math.h>
int main()
{
    float numero, raiz;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    if (numero > 0)
    {
        raiz = sqrt(numero);
        printf("A raiz quadrada e %.3f", raiz);
    }
    else if (numero < 0)
    {
        
        printf("O numero ao quadrado e %.3f",  numero * numero);
    }
    return 0;
}