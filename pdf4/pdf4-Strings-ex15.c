#include <stdio.h>
#include <string.h>
int main()
{

    char palavra[50];

    printf("Digite uma palavra em letras maiusculas: (50 caracteres)\n");
    fgets(palavra, 50, stdin);

    printf("A palavra digitada foi: %s\n", palavra);

    for (int x = 0; palavra[x] != '\0'; x++) // conta o ultimo espaço
    {
        palavra[x] = palavra[x] + 32;
    }

    printf("A palavra minuscula eh = %s", palavra); // desconsiderar ultimo caractere

    return 0;
}