#include <stdio.h>
int main()
{

    int idade, soma = 0, individuos = 0;
    float media;
    printf("Digite um numero de idades indeterminados: \n");
    do
    {

        printf("Digite a idade: ");
        scanf("%d", &idade);

        individuos++;

        soma = soma + idade;
    } while (idade >= 1);

    media = soma / (individuos - 1);

    printf("Foram digitadas as idades de %d individuos\n", individuos - 1);
    printf("A soma das idades eh = %d\n", soma);
    printf("A Media das idades eh = %f\n", media);

    return 0;
}