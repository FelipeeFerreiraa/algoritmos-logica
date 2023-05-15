#include <stdio.h>
int main()
{

    //           Suponha um arranjo a com 5 elementos e outro arranjo b com 5 elementos.
    //           faça um programa que
    //           calcule o produto escalar de a por b (Isto é, o primeiro elemento de a multiplicado pelo primeiro
    //           elemento de b mais o segundo elemento de a multiplicado pelo segundo de b mais . . .).

    int a[5], b[5], x = 0, y = 0, produtoEscalar = 0, soma = 0;

    // lendo vetor A
    do
    {
        printf("\nDigite o %d elemento do vetor A: ", x + 1);
        scanf("%d", &a[x]);
        x++;
    } while (x < 5);

    // lendo vetor B
    do
    {
        printf("\nDigite o %d elemento do vetor B: ", y + 1);
        scanf("%d", &b[y]);
        y++;
    } while (y < 5);

    for (int z = 0; z < 5; z++)
    {
        produtoEscalar = a[z] * b[z];
        soma = soma + produtoEscalar;
    }

    printf("O produto escalar de a[] por b[] eh = %d", soma);

    return 0;
}