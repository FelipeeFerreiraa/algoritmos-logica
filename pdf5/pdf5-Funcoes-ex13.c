#include <stdio.h>
#include <string.h>

float mediaVetor(int *vetor, int a);

int main()
{

    int x = 0, num;

    printf("Digite quantos numeros voce deseja digitar, para colocar em um vetor: \n");
    scanf("%d", &num);

    int inteiros[num];

    do
    {
        printf("Numero %d: \n", x + 1);
        scanf("%d", &inteiros[x]);
        x++;
    } while (x < num);

    printf("A media dos numeros fornecidos ao vetor eh = %.2f\n", mediaVetor(inteiros, num));

    return 0;
}

float mediaVetor(int *vetor, int a)
{
    int soma = 0;
    float media;

    for (int x = 0; x < a; x++)
    {
        soma = soma + vetor[x];
    }

    media = soma / a;

    return media;
}