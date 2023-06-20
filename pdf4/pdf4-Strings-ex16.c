#include <stdio.h>
#include <string.h>
int main()
{

    char palavra[50], aux[50];

    printf("Digite uma palavra: (50 caracteres)\n");
    setbuf(stdin, NULL);
    fgets(palavra, 50, stdin);

    printf("A palavra digitada foi: %s\n", palavra);

    // tentei tirar o ultimo caractere n consegui

    for (int x = 0; palavra[x] != '\0'; x++)
    {
        if (palavra[x] == ' ' || palavra[x] == 13 || palavra[x] == 8)
        {
            aux[x] = palavra[x];
        }
        palavra[x] = palavra[x] - 32;
    }

    printf("A palavra Maiscula eh = %s", palavra);

    return 0;
}