#include <stdio.h>
int main()
{

    float notaProva[15], soma = 0;
    int x = 0;

    do
    {
        printf("Nota %d: ", x + 1);
        scanf("%f", &notaProva[x]);

        x++;
    } while (x < 15);

    printf("Notas : \n");
    for (int y = 0; y < 15; y++)
    {
        printf("%.2f, ", notaProva[y]);

        soma = soma + notaProva[y];
    }

    printf("\nA soma das notas eh = %f\n", soma);
    printf("A media geral da nota da prova foi: %f\n", soma / 15);

    return 0;
}