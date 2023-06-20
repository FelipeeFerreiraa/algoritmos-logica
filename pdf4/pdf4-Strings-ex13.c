#include <stdio.h>
#include <string.h>
int main()
{

    char frase[80];
    int espacosBrancos = 0;

    printf("Digite uma frase: (80 caracteres)\n");
    fgets(frase, 80, stdin);

    printf("A frase digitada foi: %s\n", frase);

    for (int x = 0; frase[x] != '\0'; x++)
    {
        if (frase[x] == ' ')
        {
            espacosBrancos++;
        }
    }

    printf("A frase digitada possui %d espacos em brancos ([enter])", espacosBrancos);
    return 0;
}