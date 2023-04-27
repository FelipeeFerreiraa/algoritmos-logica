#include <stdio.h>
int main()
{
    int num, aux = 1, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

printf("Divisores: ");
    while (aux <= num)
    {
        if (num % aux == 0)
        {
            printf("%d, ", aux);
            soma = aux + soma;
        }
        aux++;
    }
    soma = soma - num;
    printf("\nA soma de todos os divisores desse numero, com excecao dele proprio eh [ %d ]", soma);

    return 0;
}