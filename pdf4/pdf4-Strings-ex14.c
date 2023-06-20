#include <stdio.h>
#include <string.h>
int main()
{

    char palavra[50];

    printf("Digite uma palavra: (50 caracteres)\n");
    fgets(palavra, 50, stdin);

    printf("A palavra digitada foi: %s\n", palavra);

    for (int x = 0; palavra[x] != '\0'; x++)
    {
        palavra[x] = palavra[x] +1;
    }

    printf("A palavra modificada eh = %s", palavra);

    return 0;
}