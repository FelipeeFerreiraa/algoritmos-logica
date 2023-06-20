#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int qtd;

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);
    qtd = strlen(str);

    for (int x = 0; x < qtd; x++)
    {

        if (str[x] != 'a' && str[x] != 'e' && str[x] != 'i' && str[x] != 'o' && str[x] != 'u')
        {
            printf("   %c  ", str[x]);
        }
    }

    return 0;
}