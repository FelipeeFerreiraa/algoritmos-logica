#include <stdio.h>
#include <string.h>

typedef struct habitantes
{
    char sexo, corOlhos, corCabelos;
    int idade;
} habitantes;

void lerDados();

int mediaIdade(habitantes *pessoa, int a);

int maiorIdade(habitantes *pessoa, int a);

int qtdFeminino(habitantes *pessoa, int a);

int main()
{

    lerDados();

    return 0;
}

void lerDados()
{

    habitantes pessoa[5];
    int x = 0;

    do
    {

        printf("-------Pessoa %d-------\n", x + 1);
        printf("Digite o sexo: (F-Feminino ou M-Masculino)\n");
        scanf(" %c", &pessoa[x].sexo);

        printf("Digite a cor dos olhos: (A-Azuis ou C-Castanhos)\n");
        scanf(" %c", &pessoa[x].corOlhos);

        printf("Digite a cor dos cabelos: (L-Louros, P-Pretos ou C-Castanhos)\n");
        scanf(" %c", &pessoa[x].corCabelos);

        printf("Digite a idade: \n");
        scanf("%d", &pessoa[x].idade);

        x++;

    } while (x < 5);

    // exibindo vetor
    for (int x = 0; x < 5; x++)
    {

        printf("\n\n-------Pessoa %d-------\n", x + 1);
        printf("Sexo: %c\n", pessoa[x].sexo);

        printf("Cor dos olhos: %c\n", pessoa[x].corOlhos);

        printf("Cor dos cabelos: %c\n", pessoa[x].corCabelos);

        printf("Idade: %d \n", pessoa[x].idade);
    }

    printf("\n\nA media das idades das pessoas com olhos castanhos e cabelos pretos eh = %d \n", mediaIdade(pessoa, 5));

    printf("A maior idade das pessoas entrevistadas eh = %d \n", maiorIdade(pessoa, 5));

    printf("A quantidade de individuos do sexo feminino cuja idade esta entre 18 e 35 (inclusive) e que tenham olhos azuis e cabelos louros eh = %d \n", qtdFeminino(pessoa, 5));
}

int mediaIdade(habitantes *pessoa, int a)
{

    int soma = 0, dividir = 0;
    float media = 0;

    for (int x = 0; x < 5; x++)
    {
        if (pessoa[x].corCabelos == 'P' && pessoa[x].corOlhos == 'C')
        {
            soma = soma + pessoa[x].idade;
            dividir++;
        }
    }

    media = soma / dividir; // media de pessoas com cabelo preto e olhos castanhos

    return media;
}

int qtdFeminino(habitantes *pessoa, int a)
{

    int individuos = 0;

    for (int x = 0; x < 5; x++)
    {
        if (pessoa[x].sexo == "F" && pessoa[x].idade >= 18 && pessoa[x].idade <= 35 && pessoa[x].corOlhos == 'A' && pessoa[x].corCabelos == 'L')
        {
            individuos++;
        }
    }

    return individuos;
}

int maiorIdade(habitantes *pessoa, int a)
{
    int maiorIdade = pessoa[0].idade;

    for (int x = 0; x < 5; x++)
    {
        if (pessoa[x].idade > maiorIdade)
        {
            maiorIdade = pessoa[x].idade;
        }
    }
    return maiorIdade;
}
