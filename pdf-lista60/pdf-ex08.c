#include <stdio.h>
int main()
{
    int x = 1;
    float num, auxMenor = 0, auxMaior = 0;
    printf("Digite dez numeros: \n");
    while (x <= 10)
    {

        printf("Digite o numero %d: ", x);
        scanf("%f", &num);
        
         if (num >= auxMaior)
        {
            auxMaior = num;
        }
        else if (num <= auxMenor )
        {
            auxMenor = num;
        }
        x++;
    }

    printf("O maior numero eh %.2f", auxMaior);
    printf("O menor numero eh %.2f", auxMenor);

    return 0;
}