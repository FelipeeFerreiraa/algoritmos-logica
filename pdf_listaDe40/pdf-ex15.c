#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero inteiro entre 1 e 7: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
        printf("Domingo!");
        break;

    case 2:
        printf("Segunda!");
        break;
    case 3:
        printf("Terca!");
        break;
    case 4:
        printf("Quarta!");
        break;
    case 5:
        printf("Quinta!");
        break;
    case 6:
        printf("Sexta!");
        break;
    case 7:
        printf("Sabado!");
        break;

    default:
        printf("Numero invalido!");
        break;
    }
}