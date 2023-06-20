#include <stdio.h>
#include <string.h>

int lerDados();

// main
int main()
{
    printf("A media dos salarios das pessoas entrevistadas eh = %d", lerDados());

    return 0;
}

// funçao
int lerDados()
{
    int pessoas = 0, x = 0, somaSalario = 0, salario, nmrFilhos;

    do
    {
        printf("Digite o salario da %d pessoa: \n", x + 1);
        scanf("%d", &salario);

        printf("Digite quantos filhos a %d pessoa tem: \n", x + 1);
        scanf("%d", &nmrFilhos);
        somaSalario = somaSalario + salario;
        printf("Soma dos salarios eh = %d\n", somaSalario);
        pessoas++;
        x++;
    } while (salario >= 0);

    return somaSalario / pessoas;
};