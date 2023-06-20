#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    for (int x = 0; x < 50; x++)
    {
        if (str[x] == '0' || str[x] == 'o' || str[x] == 'O')
        {
            str[x] = '1';
        }
    }

    printf("String: \n");
    printf(" %s ", str);

    return 0;
}