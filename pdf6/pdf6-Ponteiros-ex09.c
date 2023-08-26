#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void verificandoStrings(char *str1, char *str2);

int main()
{
    char str1[20], str2[20];

    printf("Digite uma string: \n");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite outra string: \n");
    fgets(str2, sizeof(str2), stdin);

    verificandoStrings(str1, str2);

    return 0;
}

void verificandoStrings(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        char *aux1 = str1;
        char *aux2 = str2;

        while (*aux1 == *aux2 && *aux2 != '\0')
        {
            aux1++;
            aux2++;
        }

        if (*aux2 == '\0')
        {
            printf("Str2 ocorre dentro da Str1!!!\n");
            return; // Encerra a função após encontrar a ocorrência
        }

        str1++;
    }

    printf("Str2 NAO ocorre dentro da Str1!!!\n");
}