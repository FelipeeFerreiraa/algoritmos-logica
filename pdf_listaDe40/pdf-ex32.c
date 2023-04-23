#include <stdio.h>
int main()
{
    float soma;
    int qnt, cod;
    printf("Digite o codigo do produto escolhido (no cardapio) e a quantidade: ");
    scanf("%d %d", &cod, &qnt);
    switch (cod)
    {
    case 100:
        soma = qnt * 1.2;
        printf("para %d CachorroQuente o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    case 101:
        soma = qnt * 1.3;
        printf("para %d BauruSimples o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    case 102:
        soma = qnt * 1.5;
        printf("para %d BauruComOvo o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    case 103:
        soma = qnt * 1.2;
        printf("para %d Hamburguer o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    case 104:
        soma = qnt * 1.7;
        printf("para %d Cheeseburguer o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    case 105:
        soma = qnt * 2.2;
        printf("para %d Suco o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    case 106:
        soma = qnt * 1.0;
        printf("para %d Refrigerente o valor a ser pago eh = %.2f.", qnt, soma);
        break;

    default:
        printf("#ERRO# - codigo invalido!");
        break;
    }
}