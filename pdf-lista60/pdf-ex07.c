#include <stdio.h>
int main()
{

    int num, x = 1, aux = 0;
    float media;
    printf("Digite dez numeros positivos:\n ");

    do
    {
        printf("Numero %d:  ", x);
        scanf("%d", &num);
        if (num < 1)
        {
            num = 0;
        }

        aux = num + aux;
        x++;
    } while (x <= 10);

    media = aux / 10;

    printf("A media dos dez digitos fornecidos sera %f", media);

    return 0;
}