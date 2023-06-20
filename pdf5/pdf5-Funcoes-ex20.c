#include <stdio.h>
#include <string.h>

int tamanho(char *str, int *strsize);

// main
int main()
{

    char str[50];
    int strsize;

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    printf("O tamanho da string fornecida eh = %d", tamanho(str, 50));

    return 0;
}

// funcao
int tamanho(char *str, int *strsize)
{

    // int tamanho = strlen(str); // conta um espaco antes do /0 q eh o enter q aperto no teclado
    int tamanho = 0;

    for (int x = 0; str[x] != '\0'; x++)
    {
        tamanho++;
    }

    return tamanho;
}