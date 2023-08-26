#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int tam;
    char *str;

    printf("Forneca o tamanho de uma string: \n");
    scanf("%d", &tam);

    str = malloc(1 + tam * sizeof(char));

    printf("Digite o conteudo da string: \n");
    // fgets(str, tam, stdin);
    scanf(" %s", str);

    *(str + tam + 1) = '\0';

    printf("String: %s \n", str);

    for (int x = 0; x < tam; x++)
    {
        if (*(str + x) == 'a' || *(str + x) == 'e' || *(str + x) == 'i' || *(str + x) == 'o' || *(str + x) == 'u')
        {
            *(str + x) = ' ';
        }
    }

    printf("String sem vogais: %s \n", str);

    return 0;
}