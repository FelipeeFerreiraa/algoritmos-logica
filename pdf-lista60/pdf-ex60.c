#include <stdio.h>
int main()
{
    float soma = 0, somaPar = 0, qtd = 0, maior = 1, menor = 0, qtdPar = 0;
    int num;
    printf("Digite numeros: (se quiser parar de digite: 0)\n");
    do
    {
        printf("numero: ");
        scanf("%d", &num);
        qtd++;
        // printf("%.2f, ", num);

        soma = soma + num;

        if (num < maior)
        {
            menor = num;
        }
        if (num > menor)
        {
            maior = num;
        }

        if (num % 2 == 0)
        {
            somaPar = somaPar + num;
            qtdPar++;
        }
    } while (num != 0);

    printf("A soma dos numeros eh = [%.2f]\n", soma);
    printf("A quantidade de numeros digitados eh = [%.2f]\n", qtd - 1);
    printf("A media dos numeros digitados eh = [%.2f]\n", soma / (qtd - 1));
    printf("O maior numero eh = [%.2f]\n", maior);
    printf("O menor numero eh = [%.2f]\n", menor);
    printf("A media dos numeros pares eh = [%.2f]\n", somaPar / qtdPar);

    return 0;
}