#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int num, res;

    printf("Digite uma string: \n");
    fgets(str1, 50, stdin);

    printf("Digite outra string: \n");
    fgets(str2, 50, stdin);

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (int x = 0; x < num; x++)
    {
        if (str1[x] == str2[x])
        {
            res = 0;
            printf("%d-", res);
        }

        if (str1[x] != str2[x])
        {
            res = -1;
            printf("%d-", res);
        }
    }

    return 0;
}