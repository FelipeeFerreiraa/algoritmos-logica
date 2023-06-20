#include <stdio.h>
#include <string.h>

void ordemCrescente(int a, int b, int c);

int main()
{
    int conjuntos;
    printf("Digite quantos conjuntos de numeros voce deseja digitar: \n");
    scanf("%d", &conjuntos);
    int vetor[conjuntos][3];
    for (int x = 0; x < conjuntos; x++)
    {
        printf("Digite os valores para o conjunto %d \n", x + 1);
        for (int y = 0; y < 3; y++)
        {
            printf("Valor %d: ", y + 1);
            scanf("%d", &vetor[x][y]);
        }
    }

    for (int x = 0; x < conjuntos; x++)
    {
        printf("\nConjunto %d: \n", x + 1);

        ordemCrescente(vetor[x][0], vetor[x][1], vetor[x][2]);
    }

    return 0;
}

// funcao
void ordemCrescente(int a, int b, int c)
{
    int maior, med, menor;
    if (a > b && a > c && b > c)
    {
        maior = a;
        med = b;
        menor = c;
    }

    if (a > b && a > c && c > b)
    {
        maior = a;
        med = c;
        menor = b;
    }

    if (b > a && b > c && a > c)
    {
        maior = b;
        med = a;
        menor = c;
    }

    if (b > a && b > c && c > a)
    {
        maior = b;
        med = c;
        menor = a;
    }

    if (c > a && c > b && a > b)
    {
        maior = c;
        med = a;
        menor = b;
    }

    if (c > a && c > b && b > a)
    {
        maior = c;
        med = b;
        menor = a;
    }

    printf("O maior eh %d\n", maior);
    printf("O medio eh %d\n", med);
    printf("O menor eh %d\n", menor);
};