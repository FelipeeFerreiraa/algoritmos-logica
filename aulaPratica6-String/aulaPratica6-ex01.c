#include <stdio.h>
#include <string.h>
int main()
{

    char str1[20], str2[20];
    printf("Digite uma string: \n");
    fgets(str1, 20, stdin);

    printf("Digite outra string: \n");
    fgets(str2, 20, stdin);

    printf("String 1: %s \n", str1);
    printf("String 2: %s \n", str2);

    // comparendo strings
    if (strcmp(str1, str2) == 0)
    {
        printf("Strings iguais!\n");
    }
    else if (strcmp(str1, str2) > 0)
    {
        printf("String 1 eh a maior: %s \n", str1);
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("String 2 eh a maior: %s \n", str2);
    }

    // concatenando strings str1 + str2
    printf("Concatenando: \n");
    strcat(str1, str2);
    printf("%s \n", str1);

    // concatenando strings str2 + str1
    printf("Concatenando: \n");   //str1 passa a ser str1+str2
    strcat(str2, str1);  //ta concatenando str2 com str1+str2
    printf("%s \n", str2);  //so um teste

    return 0;
}