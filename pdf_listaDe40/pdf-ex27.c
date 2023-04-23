#include <stdio.h>
int main()
{
    float idade;
    printf("'Digite sua idade' para classificarmos em uma categoria:");
    scanf("%f", &idade);
    if (idade >= 5 && idade <= 7)
    {
        printf("idade = %.0f, Categoria INFANTIL-A", idade);
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("idade = %.0f, Categoria INFANTIL-B", idade);
    }
    else if (idade >= 11 && idade <= 13)
    {
        printf("idade = %.0f, Categoria JUVENIL-A", idade);
    }
    else if (idade >= 14 && idade <= 17)
    {
        printf("idade = %.0f, Categoria JUVENIL-B", idade);
    }
    else if (idade > 18)
    {
        printf("idade = %.0f, Categoria SENIOR", idade);
    }
    else
    {

        printf("#ERRO#-IDADE INVALIDA");
    }
    return 0;
}