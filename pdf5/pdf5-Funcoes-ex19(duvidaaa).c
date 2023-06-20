#include <stdio.h>
#include <string.h>

void compararStrings(char *str1, int a, char *str2, int b);

int main()
{
    char str1[50], str2[50];

    printf("Digite uma string: \n");
    fgets(str1, 50, stdin);

    printf("Digite outra string: \n");
    fgets(str2, 50, stdin);

    compararStrings(str1, 50, str2, 50);

    return 0;
}

void compararStrings(char *str1, int a, char *str2, int b)
{
    int teste;
    char ordenada1[a], ordenada2[b];
    if (strlen(str1) != strlen(str2))
    {
        printf("Falso");
    }

    for (int x = 0; x != '\0'; x++)
    {

        for (int y = x + 1; y != '\0'; y++)
        {
            teste = strcmp(str1, str2);

            if (teste == 0)
            {
                printf("Verdadeiro");
            }
        }
    }

    /*for (int x = 0; x != '\0'; x++)
    {

        if (ordenada1[x] == ordenada2[x])
        {
            printf("Verdadeiro");
        }

        if (ordenada1[x] != ordenada2[x])
        {
            printf("aaaaaa");
        }

    }
    */
}