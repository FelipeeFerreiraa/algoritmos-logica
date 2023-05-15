#include <stdio.h>
int main()
{

    int x[5], y[5], uniaoXy[10], i = 0, j = 0, soma[5], produto[5], diferenca[5], interSeccao[5] = {0};

    // lendo array X
    printf("Digite cinco numeros para vetorX: \n");
    do
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &x[i]);
        uniaoXy[i] = x[i]; // ao inserir o elemento ao vetor1
        i++;               // ja vai adicionando os elementos a vUniao
    } while (i < 5);

    // lendo array Y
    printf("Digite cinco numeros para vetorY: \n");
    do
    {
        printf("Numero %d: ", j + 1);
        scanf("%d", &y[j]);
        uniaoXy[j + 5] = y[j]; // pega os elementos de vUniao adiciona
        j++;                   // mais 10 e inseri os elementos do
    } while (j < 5);           // vetor2

    // exibindo o arrayX
    printf("\nArray X: \n");
    for (int c = 0; c < 5; c++)
    {
        printf("%d, ", x[c]);
    }

    // exibindo o arrayY
    printf("\nArray Y: \n");
    for (int f = 0; f < 5; f++)
    {
        printf("%d, ", y[f]);
    }

    // exibindo a soma
    printf("\nArray soma X e Y: \n");
    for (int p = 0; p < 5; p++)
    {

        soma[p] = x[p] + y[p];
        printf("[%d], ", soma[p]);
    }

    // exibindo o produto
    printf("\nArray produto X e Y: \n");
    for (int n = 0; n < 5; n++)
    {

        produto[n] = x[n] * y[n];
        printf("[%d], ", produto[n]);
    }

    // verificando a diferença
    int teste;
    for (int q = 0; q < 5; q++)
    {
        teste = 0;
        for (int r = 0; r < 5; r++)
        {
            if (x[q] == y[r])
            {
                teste = 1;
                x[q] = 1;
                break;
            }
        }

        if (teste == 0)
        {
            diferenca[q] = x[q];
        }
    }
    // exibindo a diferença
    printf("\nArray diferenca entre X e Y: \n");
    for (int g = 0; g < 5; g++)
    {
        if (diferenca[g] != 0)
        {
            printf("[%d], ", diferenca[g]);
        }
        else
        {
            printf("[%d], ", x[g]);
        }
    }

    // Intersecção entre x e y
    //interSeccao[0] = 15;
    printf("\nInterseccao entre x e y: \n");
    for (int b = 0; b < 5; b++)
    {
        for (int m = 0; m < 5; m++)
        {
            if (x[b] != y[m])
            {

                x[b] = 0;

                // printf("[%d], ", interSeccao[b]);
            }
        }
        interSeccao[b] = x[b];
    }
    // exibindo Intersecção entre x e y
    for (int k = 0; k < 5; k++)
    {
        if (interSeccao[k] != 0)
        {
            printf("%d ", interSeccao[k]);
        }
    }

    // verificando uniao
    for (int a = 0; a < 5; a++)
    {
        for (int w = a + 1; w < 10; w++)
        {
            if (uniaoXy[a] == uniaoXy[w])
            {
                uniaoXy[w] = 0;
            }
        }
    }

    // exibindo uniao
    printf("\nArray Uniao: \n");
    for (int g = 0; g < 10; g++)
    {
        if (uniaoXy[g] != 0) // o elemento da uniiao q for 0
        {                    // nao sera printado
            printf("[%d], ", uniaoXy[g]);
        }
    }

    return 0;
}