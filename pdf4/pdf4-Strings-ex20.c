#include <stdio.h>
#include <string.h>

typedef struct carro
{
    char carros[50];
    float consumo;
} carro;

int main()
{
    carro lista1[5];
    float carroEconomico;
    int nomeCarro;

    printf("Digite cinco modelos de carro e seu consumo por litro: \n");
    /*
    media da internet
    fusca - 8.4 Km/l
    HB20 - 13.3 Km/l
    ferrari - 5.5 km/l
    opala - 4.8 Km/l
    koenigsegg - 6.8 km/l
    */
    for (int x = 0; x < 5; x++)
    {
        printf("Carro %d: ", x + 1);
        scanf(" %s", &lista1[x].carros);
        printf("Km por litro: ");
        scanf("%f", &lista1[x].consumo);
    }

    carroEconomico = lista1[0].consumo;

    // verificando consumo
    for (int x = 0; x < 5; x++)
    {

        if (carroEconomico < lista1[x].consumo)
        {
            carroEconomico = lista1[x].consumo;
            nomeCarro = x;
        }
    }

    // exibindo carro e consumo
    for (int x = 0; x < 5; x++)
    {
        printf("\n----Carro %d: %s\n", x + 1, lista1[x].carros);
        printf("------Consumo Carro %d: %.2f\n\n", x + 1, lista1[x].consumo);
    }

    // exibindo carro mais economico
    printf("Carro mais economico eh = %s\n", lista1[nomeCarro].carros);
    printf("Consumo do Carro eh = %.2f\n\n", carroEconomico);

    // exibindo carro e consumo para 1000Km
    for (int x = 0; x < 5; x++)
    {
        printf("------Consumo do %s para 1000Km eh %.2f litros\n\n", lista1[x].carros, 1000 / lista1[x].consumo);
    }
    return 0;
}