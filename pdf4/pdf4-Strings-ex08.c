#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int nmrDeUns = 0;

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    for (int x = 0; x < 50; x++)
    {
        if (str[x] == '1')
        {
            nmrDeUns++;
        }
    }

    printf("String: \n");
    printf(" %s ", str);

    printf("\nA string digitada tem %d numeros 1 !", nmrDeUns);

    return 0;
}