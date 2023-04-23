#include <stdio.h>
int main()
{

    int num, x = 1, val, auxMaior, auxMenor;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &num);

    while (x <= num)
    {
        printf("Digite o numero %d: ", x);
        scanf("%d", &val);

        if (val >= auxMaior)
        {
            auxMaior = val;
        }
        else if (val <= auxMenor)
        {
            auxMenor = val;
        }
        x++;
    }

    printf("O maior numero digitado foi %d\n", auxMaior);
    printf("O menor numero digitado foi %d\n", auxMenor);

    return 0;
}