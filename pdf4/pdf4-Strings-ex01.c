#include <stdio.h>
#include <strings.h>

int main()
{

    char str[50];

    printf("Digite uma string: \n");
    fgets(str, 50, stdin);

    printf("String: \n");

    printf("%s", str);

    return 0;
}