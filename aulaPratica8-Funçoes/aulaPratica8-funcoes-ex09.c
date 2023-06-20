#include <stdio.h>
#include <string.h>

int verificarPositivoNegativo(int a);

// main
int main()
{

    int x = 0, num;

    printf("Digite numeros, verificando se eh positivo ou negativo: \n ");
    do
    {
        printf("Numero %d: \n ", x + 1);
        scanf("%d", &num);

        if (verificarPositivoNegativo(num) == -1)//false
        {
            printf("Numero negativo!!!\n\n");
        }
        else if (verificarPositivoNegativo(num) == 1)//true
        {
            printf("Numero positivo!!!\n\n");
        }

        x++;

    } while (num != 0);

    return 0;
}

// funçao
int verificarPositivoNegativo(int a)
{
    if (a < 0)
    {
        // printf("Numero negativo!!!");
        return -1;
    }
    else if (a > 0)
    {
        // printf("Numero positivo!!!");
        return 1;
    }
}