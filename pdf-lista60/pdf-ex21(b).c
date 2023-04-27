#include <stdio.h>
int main()
{
    long int num1, num2, auxMultiplicacao = 1;

    printf("Digite dois numeros inteiros: (numero1 < numero2)");
    scanf("%ld %ld", &num1, &num2);

    printf("Intervalo = ");

    while (num1 <= num2)
    {
        if (num1 % 2 != 0)
        {
            printf("%ld, ", num1);
            auxMultiplicacao = num1 * auxMultiplicacao;
        }
        num1++;
    }

    printf("\nA multiplicacao dos numeros impares desse intervalo, incluindo os digitados eh = %ld \n", auxMultiplicacao);

    return 0;
}