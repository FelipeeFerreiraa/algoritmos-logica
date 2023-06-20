#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    

    for (int x = strlen(str)-1; x >= 0; x--)
    {

        printf("   %c  ", str[x]);
    }

    return 0;
}