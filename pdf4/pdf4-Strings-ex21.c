#include <stdio.h>
#include <string.h>

int main()
{

    char frase1[80], frase2[80];

    setbuf(stdin, NULL);
    printf("Digite uma frase: \n");
    fgets(frase1, 80, stdin);

    setbuf(stdin, NULL);
    printf("Digite outra frase: \n");
    fgets(frase2, 80, stdin);

    // exibindo frases
    printf("frase1 : %s\n", frase1);
    printf("frase2 : %s\n", frase2);

    for (int x = 0; frase1[x] != '\0'; x++)
        if (frase1[x] == 'a' && frase2[x] == 'a')
        {
            frase1[x] = '*';
            frase2[x] = '*';
        }

    // exibindo frases modificadas
    printf("-------Frases modificadas:\n");
    printf("frase1 : %s\n", frase1);
    printf("frase2 : %s\n", frase2);

    return 0;
}