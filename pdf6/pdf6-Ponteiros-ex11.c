#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprimirArray(int *vetoor, int tamanho);

int main()
{

    int array[5], *p;
    p = array;
    printf("Preencha o array com 5 numeros: \n");
    for (int x = 0; x < 5; x++)
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", p + x);
    }

    imprimirArray(p, 5);

    return 0;
}

void imprimirArray(int *vetoor, int tamanho)
{
    printf("Elementos do array: \n");
    for (int x = 0; x < tamanho; x++)
    {
        printf("%d , ", *(vetoor + x));
    }
}
