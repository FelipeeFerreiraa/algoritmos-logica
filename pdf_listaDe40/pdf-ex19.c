#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero % 3 == 0)
    {
        printf("Numero divisivel por 3");
    }

    else if (numero % 5 == 0)
    {
        printf("Numero divisivel por 5");
    }
    else
    {
        printf("O numero digitado nao eh divisivel por 3 nem por 5 ");
    }
    return 0;
}