#include <stdio.h>
int main()
{

    int num, x = 1, aux = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (x <= num)
    {
        aux = x + aux;
        printf("[%d],", x);
        x++;
    }

    printf("A soma dos %d primeiros numeros naturais eh = %d", num, aux);

    return 0;
}