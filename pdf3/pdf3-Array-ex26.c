#include <stdio.h>
#include <math.h>
int main()
{

    int v[10], x = 0, soma = 0;
    float desvioPadrao = 0, media;

    // lendo array
    printf("Digite dez numeros: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &v[x]);
        x++;
    } while (x < 10);

    // exibindo o array
    printf("\nArray: \n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d, ", v[c]);
    }

    // calculando o desvio padrao (dividindo a formula matematica)
    for (int y = 0; y < 10; y++)
    {
        soma = soma + v[y]; //  obtendo a media
        media = soma / 10;  //  obtendo a media

        desvioPadrao = desvioPadrao + pow(v[y] - media, 2); // pow() e
                                                            // somatorio
    }

    desvioPadrao = sqrt(desvioPadrao / (10 - 1)); // calculando a raiz

    // exibindo o desvio padrao
    printf("\nO desvio padrao do vetor eh = %f", desvioPadrao);

    return 0;
}