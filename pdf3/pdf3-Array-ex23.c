#include <stdio.h>
int main()
{

    int a[5], b[5], produtoEscalar = 0, x = 0, y = 0;

    // lendo vetor A
    printf("Vetor A: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &a[x]);
        x++;
    } while (x < 5);

    // lendo vetor B
    printf("\nVetor B: \n");
    do
    {
        printf("Numero %d: ", y + 1);
        scanf("%d", &b[y]);
        y++;
    } while (y < 5);

    // exibindo A
    printf("\nArray A: \n");
    for (int w = 0; w < 5; w++)
    {
        printf("%d, ", a[w]);
    }

    // exibindo B
    printf("\nArray B: \n");
    for (int c = 0; c < 5; c++)
    {
        printf("%d, ", b[c]);
    }

    // exibindo Produto Escalar
    printf("\nProduto Escalar: \n");
    for (int z = 0; z < 5; z++)
    {
        produtoEscalar = produtoEscalar + a[z] * b[z];
    }

    printf("%d", produtoEscalar);

    return 0;
}