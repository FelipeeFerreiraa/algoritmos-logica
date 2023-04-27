#include <stdio.h>
int main()
{

    int x = 1, num, aux = 0;
    float media;
    printf("Digite dez numeros inteiros: \n");
    while (x <= 10)
    {
        printf("numero %d: ", x);
        scanf("%d", &num);
        x++;

        aux = num + aux;
    }

    media = aux / 10;

    printf("A media dos numeros digitados eh %.2f e a soma eh %d ", media, aux);

    return 0;
}