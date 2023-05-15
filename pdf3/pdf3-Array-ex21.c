#include <stdio.h>
int main()
{

    int a[10], b[10], c[10], x = 0, y = 0;

    printf("Digite 10 numeros para os vetores A e B: \n");
    // lendo vetor A
    printf("Vetor A: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &a[x]);
        x++;
    } while (x < 10);

    // lendo vetor B
    printf("\nVetor B: \n");
    do
    {
        printf("Numero %d: ", y + 1);
        scanf("%d", &b[y]);
        y++;
    } while (y < 10);

    // exibindo A
    printf("\nArray A: \n");
    for (int z = 0; z < 10; z++)
    {
        printf("%d, ", a[z]);
    }

    // exibindo B
    printf("\nArray B: \n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d, ", b[c]);
    }

    // exibindo C
    printf("\nArray C: \n");
    for (int w = 0; w < 10; w++)
    {

        c[w] = a[w] * b[w];
        printf("%d, ", c[w]);
    }

    return 0;
}