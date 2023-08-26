#include <stdio.h>
#include <string.h>

int main()
{
    int array[5], *p;

    for (int x = 0; x < 5; x++)
    {
        p = array;
        //  *p = p[x] * 2;
    }

    printf("Digite 5 numeros: \n");
    for (int x = 0; x < 5; x++)
    {
        printf("Numero %d: \n", x + 1);
        scanf("%d", p + x);
    }

    printf("\nArray fornecido:\n");
    for (int x = 0; x < 5; x++)
    {
        printf(" %d, ", *(p + x));
    }

    for (int x = 0; x < 5; x++)
    {
        if (*(p + x) % 2 == 0)
        {
            printf("\n\nNumero no array: %d, endereco de memoria %d ", *(p + x), p + x);
        }
    }
    return 0;
}