#include <stdio.h>
#include <string.h>
int main()
{

    char string[100], letra;
    int repeteco = 0;

    printf("Digite uma string: \n");
    fgets(string, 100, stdin);

    printf("Digite um caractere: \n");
    scanf("%c", &letra);

    for (int x = 0; x < strlen(string); x++)
    {
        if (string[x] == letra)
        {
            repeteco++;
        }
    }

    printf("%s \n", string);
    printf("A letra '%c' repetiu na string = %d vezes!", letra, repeteco);

    return 0;
}