#include <stdio.h>
int main()
{

    float numero1, numero2, numero3, aux;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    if (numero1 > numero2) //  9 5 2
    {
        aux = numero1;
        numero1 = numero2;
        numero2 = aux; // 5 9 2
        if (numero2 > numero3)
        {
            aux = numero2;
            numero2 = numero3;
            numero3 = aux; // 5 2 9
            if (numero1 > numero2)
            {
                aux = numero2;
                numero2 = numero1;
                numero1 = aux; // 1 5 9
            }
        }
    }

    if (numero2 > numero3)
    {
        aux = numero2;
        numero2 = numero3;
        numero3 = aux;
    }

    if (numero1 > numero3)
    {
        aux = numero1;
        numero1 = numero3;
        numero3 = aux;
    }

    printf("%.1f %.1f %.1f", numero1, numero2, numero3);

    return 0;
}