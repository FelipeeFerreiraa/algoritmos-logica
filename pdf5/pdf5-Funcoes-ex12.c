#include <stdio.h>
#include <string.h>

int verificarArrayPar(int *i, int a);

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

    printf("No vetor fornecido possui %d numero(s) pare(s).!", verificarArrayPar(inteiros, num));

    return 0;
}

int verificarArrayPar(int *i, int a)
{
    int qtdPares = 0;
    for (int x = 0; x < a; x++)
    {
        if (i[x] % 2 == 0)
        {
            qtdPares++;
        }
    }

    return qtdPares;
}