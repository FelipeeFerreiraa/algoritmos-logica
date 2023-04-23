
#include <stdio.h>
int main()
{
    int x;
    float num1, num2;

    do
    {
        printf("\nEscolha uma opcao: \n");
        printf("[1] Adicao\n ");
        printf("[2] Subtracao\n ");
        printf("[3] Multiplicacao\n ");
        printf("[4] Divisao\n ");
        printf("[0] Sair\n ");
        scanf("%d", &x);

        if (x == 0)
        {
            printf("Voce nao escolheu uma opcao.\nObrigado por utilizar a calculadora!!\n");
            break;
        }

        if (x == 1)
        {
            printf("Digite um numero: ");
            scanf("%f", &num1);
            printf("Digite outro numero: ");
            scanf("%f", &num2);
            printf("%.1f + %.1f = %.1f \n", num1, num2, num1 + num2);
            x = 5;
        }
        else if (x == 2)
        {
            printf("Digite um numero: ");
            scanf("%f", &num1);
            printf("Digite outro numero: ");
            scanf("%f", &num2);
            printf("%.1f - %.1f = %.1f \n", num1, num2, num1 - num2);
            x = 5;
        }
        else if (x == 3)
        {
            printf("Digite um numero: ");
            scanf("%f", &num1);
            printf("Digite outro numero: ");
            scanf("%f", &num2);
            printf("%.1f * %.1f = %.1f \n", num1, num2, num1 * num2);
            x = 5;
        }
        else if (x == 4)
        {
            printf("Digite um numero: ");
            scanf("%f", &num1);
            printf("Digite outro numero: ");
            scanf("%f", &num2);
            printf("%.1f / %.1f = %.1f \n", num1, num2, num1 / num2);
            x = 5;
        }

    } while (x < 0 || x > 4);

    return 0;
}
