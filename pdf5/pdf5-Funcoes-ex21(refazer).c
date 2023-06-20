#include <stdio.h>
#include <string.h>

void compararString(char *str, int size, char *str2, int size2);

int main()
{

    char *str[50], *str2[50];

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    printf("Digite outraa string: \n");
    fgets(str2, 50, stdin);

    compararString(str, 50, str2, 50);

    return 0;
}

void compararString(char *str, int size, char *str2, int size2)
{
    int iguais = 0, x;
    for (x = 0; x != '\0'; x++)
    {
        if (str[x] == str2[x])
        {
            iguais++;
        }
    }

    if (iguais == x)
    {
        printf("String iguais!");
    }
    else
    {
        printf("String diferentes!");
    }
}