#include <stdio.h>
int main()
{
    float salario, prestacao;
    printf("Digite seu salario e o valor da prestacao de sue emprestimo: ");
    scanf("%f %f", &salario, &prestacao);
    if (salario * 0.2 > prestacao)
    {
        printf("Emprestimo CONCEDIDO!!");
    }
    else if (salario * 0.2 < prestacao)
    {
        printf("Emprestimo NEGADO!!!!!");
    }
    return 0;
}