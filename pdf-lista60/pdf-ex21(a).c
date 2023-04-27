#include <stdio.h>
int main()
{
    int num1, num2, aux = 0, parForcado = 0;

    printf("Digite dois numeros inteiros: (numero1 < numero2)");
    scanf("%d %d", &num1, &num2);
    if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        parForcado = num1 + num2;
    }
    else
    {
        parForcado = 0;
    }

    printf("Intervalo = ");
    while (num1 <= num2)
    {
        // parForcado = num1 + num2;

        if (num1 % 2 == 0)
        {
            printf(" %d, ", num1);

            aux = num1 + aux;
        }

        num1++;
    }

    printf("\nA soma dos numeros pares desse intervalo de numeros fornecidos, incluindo os numeros digitados eh = %d \n", aux + parForcado);

    printf("A soma dos primeiros digitos eh %d\n\n", parForcado);

   
    return 0;
}