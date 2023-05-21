#include <stdio.h>
#include <string.h>
int main()
{

    char str[4][50], aux[50];
    int compara;
    printf("Digite quatro nomes: \n");
    for (int x = 0; x < 4; x++)
    {
        fgets(str[x], 50, stdin);
    }

    for (int w = 0; w < 4; w++)
    {
        for (int z = w + 1; z < 4; z++)
        {
            compara = strcmp(str[w], str[z]);
            if (compara > 0) // qnd a str[w] for maior
            {
                strcpy(aux, str[w]);
                strcpy(str[w], str[z]);
                strcpy(str[z], aux);
            }
        }
    }

    printf("Nomes ordenados: \n");
    for (int x = 0; x < 4; x++)
    {

        printf("%s", str[x]);
    }

    return 0;
}