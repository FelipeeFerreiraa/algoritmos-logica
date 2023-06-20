#include <stdio.h>
#include <string.h>
int main()
{

    char palavra[50], caractere;
    int vogais = 0;
    printf("Digite uma palavra: \n");
    fgets(palavra, 50, stdin);

    printf("A palavra digitada foi: %s\n", palavra);

    printf("Digite um caractere qualquer: \n");
    scanf(" %c", &caractere);
    for (int x = 0; palavra[x] != '\0'; x++)
    {
        if (palavra[x] == 'a' || palavra[x] == 'e' || palavra[x] == 'i' || palavra[x] == 'o' || palavra[x] == 'A' || palavra[x] == 'O' || palavra[x] == 'I' || palavra[x] == 'E' || palavra[x] == 'U' ||palavra[x] == 'u')
        {
            palavra[x] = caractere;
            vogais++;
        }
    }

    printf("A palavra digitada possui %d vogais!\n", vogais);

    printf("Palavra modificada: %s\n", palavra);

    return 0;
}