#include <stdio.h>
#include <strings.h>

int main()
{
    char str[50], aux[50];
    int nmrDeCaracteres = 0;

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    printf("String: %s", str);

    for (int x = 0; str[x] != '\0'; x++)
    {
        aux[x] = str[x];
        if (aux[x] == str[x])   //conta o espaço
        {
            nmrDeCaracteres++;
        }
    }
    printf("A string fornecida tem %d caracteres.", nmrDeCaracteres-1);  //menos 1 tira o [enter] no final

    return 0;
}