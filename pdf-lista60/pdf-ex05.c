#include <stdio.h>
int main()
{
    int x = 1, aux = 0, val;

    printf("Digite dez valores: \n");

    while (x <= 10)
    {
        printf("valor %d: ", x);
        scanf("%d, ", &val);
        x++;
        aux = val + aux;
    }
    printf("A soma dos valores digitados eh %d", aux);

    return 0;
}