#include <stdio.h>
#include <string.h>

int verificarNum(int a);

// main
int main()
{

    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    printf("retorno: %d\n", verificarNum(num));

    return 0;
}

int verificarNum(int a)
{
    if (a > 0)
    {

        return 1;
    }
    else if (a < 0)
    {

        return -1;
    }
    else if (a == 0)
    {
        return 0;
    }
}