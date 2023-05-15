#include <stdio.h>
int main()
{

    int vetor[100], numero = 1, x = 0;

    while (x < 100) // os 100 primeiros
    {
        if (numero % 7 != 0 && numero % 10 != 7) // testa o 'numero' q 
        {                                        // cmç com 1
            vetor[x] = numero;                   // se der certo entra e
            x++;                                 // incrementa o X
        }                                        // se der errado sai 
        numero++;                                // e incrementa o 'numero
    }

    for (int y = 0; y < 100; y++)
    {
        printf("%d, ", vetor[y]);
    }

    return 0;
}