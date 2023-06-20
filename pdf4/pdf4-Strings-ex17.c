#include <stdio.h>
#include <string.h>
int main()
{

    char frase[80], aux[80];
    int y = 0;

    printf("Digite uma frase: (80 caracteres)\n");
    fgets(frase, 80, stdin);

    printf("A frase digitada foi: %s\n", frase);

    for (int x = 0; frase[x] != '\0'; x++)
    {
        if (frase[x] != ' ')
        {
            aux[y] = frase[x];
            y++;
        }
    }

       printf("A frase digitada sem os espacos em branco: \n");
    printf("%s", aux);
    return 0;
}