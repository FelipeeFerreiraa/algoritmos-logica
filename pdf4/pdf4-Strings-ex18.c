#include <stdio.h>
#include <string.h>

int main()
{

    char str[80], letra1, letra2;
    printf("Digite uma string: \n");
    fgets(str, 80, stdin);

    printf("Digite uma letra que voce queira trocar: \n");
    scanf(" %c", &letra1);

    printf("Digite outra letra para ficar no lugar: \n");
    scanf(" %c", &letra2);

    printf("A string fornecida eh = %s\n", str);
    printf("A primeira letra eh = [%c], a segunda eh = [%c]\n", letra1, letra2);

    for (int x = 0; str[x] != '\0'; x++)
    {
        if (str[x] == letra1)
        {
            str[x] = letra2;
        }
    }

    printf("A string modificada eh = %s\n", str);

    return 0;
}