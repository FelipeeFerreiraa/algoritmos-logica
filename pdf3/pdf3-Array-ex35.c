#include <stdio.h>
int main()
{

    int numA, numB, vetorA[4], vetorB[4], vetorSoma[4];

    printf("Digite dois numeros positivos menores que 10.000 (dez mil): \n");

    printf("Numero A: ");
    scanf("%d", &numA);

    printf("Numero B: ");
    scanf("%d", &numB);

    for (int x = 0; x < 4; x++)
    {
        vetorA[x] = numA % 10; // pega o ultimo algarismo no caso de 123
        vetorB[x] = numB % 10; // pega o 3

        numA = numA / 10; // pega o proximo algarismo no caso de 123
        numB = numB / 10; // vira 12.3 como eh int pega o 12
    }

    // exibindo vetorA
    printf("\nVetor A: \n");
    for (int z = 0; z < 4; z++)
    {
        printf("%d", vetorA[z]);
    }

    // exibindo vetorB
    printf("\nVetor B: \n");
    for (int z = 0; z < 4; z++)
    {
        printf("%d", vetorB[z]);
    }

    // exibindo vetorSoma A+B
    printf("\nVetor Soma: \n");
    for (int y = 0; y < 4; y++)
    {
        vetorSoma[y] = vetorA[y] + vetorB[y];
        printf("%d,", vetorSoma[y]);
    }

    return 0;
}