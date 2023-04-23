#include <stdio.h>
int main()
{
    float operacao = 0, numero1, numero2;
    printf("XXx-Escolha uma opcao abaixo:-xXX\n1-Soma de 2 numeros.\n2-Diferenca de 2 numeros.\n3-Produto entre 2 numeros.\n4-Divisao entre 2 numeros (o denominador nao pode ser zero). ");
    scanf("%f", &operacao);
    printf("digite um numero: ");
    scanf("%f", &numero1);
    printf("Digite outro numero: ");
    scanf("%f", &numero2);

    if (operacao == 1)
    {
        printf("A soma desses dois numeros eh = %.1f", numero1 + numero2);
    }
    else if (operacao == 2)
    {
        printf("A diferenca desses dois numeros eh = %.1f", numero1 - numero2);
    }
    else if (operacao == 3)
    {
        printf("O produto desses dois numeros eh = %.1f", numero1 * numero2);
    }
    else if (operacao == 4)
    {
        if (numero2 == 0)
        {
            printf("O denominador deve ser diferente de zero! ");
        }
        else
        {
            printf("A divisao desses dois numeros eh = %.1f", numero1 / numero2);
        }
    }
    else if (operacao > 4)
    {
        printf("Operacao invalida!!!");
    }

    return 0;
}