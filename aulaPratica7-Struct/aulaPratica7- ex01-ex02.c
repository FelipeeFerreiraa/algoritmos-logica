#include <stdio.h>
#include <strings.h>

struct bandas
{
    char nome[100];
    char tipoMusica[100];
    int integrantes;
    int posicao;
};

int main()
{

    struct bandas bandasFavoritas[5];
    for (int x = 0; x < 5; x++)
    {
        printf("Digite o nome da banda %d: ", x + 1);
        setbuf(stdin, NULL);
        fgets(bandasFavoritas[x].nome, 100, stdin);
        // scanf(" %s", &bandasFavoritas[x].nome);

        printf("Digite qual o tipo de musica a banda %d, toca: ", x + 1);
        setbuf(stdin, NULL);
        fgets(bandasFavoritas[x].tipoMusica, 100, stdin);
        // scanf(" %s", &bandasFavoritas[x].tipoMusica);

        printf("Digite quantos integrantes a banda %d, tem: ", x + 1);
        scanf("%d", &bandasFavoritas[x].integrantes);

        printf("Digite a posicao da banda %d, no seu top 5: ", x + 1);
        scanf(" %d", &bandasFavoritas[x].posicao);
    }

    for (int x = 0; x < 5; x++)
    {
        printf("\n-----Nome da banda: %s \n", bandasFavoritas[x].nome);

        printf("Tipo de musica: %s \n", bandasFavoritas[x].tipoMusica);

        printf("Integrantes: %d \n", bandasFavoritas[x].integrantes);

        printf("Rank: %d de 5\n", bandasFavoritas[x].posicao);
    }

    for (int x = 0; x < 5; x++)
    {
        if (bandasFavoritas[x].posicao == 1)
        {
            printf("-------Banda favorita: \n");
            printf("\n--Nome da banda: %s \n", bandasFavoritas[x].nome);

            printf("Tipo de musica: %s \n", bandasFavoritas[x].tipoMusica);

            printf("Integrantes: %d \n", bandasFavoritas[x].integrantes);

            printf("Rank: %d de 5\n", bandasFavoritas[x].posicao);
        }
    }

    return 0;
}