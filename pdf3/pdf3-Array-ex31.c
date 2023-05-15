#include <stdio.h>
int main()
{

    int x = 0, y = 0, v1[10], v2[10], vUniao[20];

    // lendo array v1
    printf("Digite dez numeros para vetor1: \n");
    do
    {
        printf("Numero %d: ", x + 1);
        scanf("%d", &v1[x]);
        vUniao[x] = v1[x]; // ao inserir o elemento ao vetor1
        x++;               // ja vai adicionando os elementos a vUniao
    } while (x < 10);

    // lendo array v2
    printf("Digite dez numeros para vetor2: \n");
    do
    {
        printf("Numero %d: ", y + 1);
        scanf("%d", &v2[y]);
        vUniao[y + 10] = v2[y]; // pega os elementos de vUniao adiciona
        y++;                    // mais 10 e inseri os elementos do
    } while (y < 10);           // vetor2

    // exibindo o arrayV1
    printf("\nArray V1: \n");
    for (int c = 0; c < 10; c++)
    {
        printf("%d, ", v1[c]);
    }

    // exibindo o arrayV2
    printf("\nArray V1: \n");
    for (int f = 0; f < 10; f++)
    {
        printf("%d, ", v2[f]);
    }

    // uniao verificando
    for (int w = 0; w < 10; w++)
    {

        for (int h = w + 1; h < 20; h++)
        {

            if (vUniao[w] == vUniao[h]) // se uniao[w] == uniao[h]
            {                           // uniao[h] recebe 0
                vUniao[h] = 0;
            }
        }
    }

    // exibindo uniao
    printf("\nArray Uniao: \n");
    for (int g = 0; g < 20; g++)
    {
        if (vUniao[g] != 0) // o elemento da uniiao q for 0
        {                   // nao sera printado
            printf("[%d], ", vUniao[g]);
        }
    }

    return 0;
}