#include <stdio.h>
int main()
{

    float val, comissao;
    printf("Digite o valor da venda mensal: ");
    scanf("%f", &val);

    if (val >= 100000.00)
    {
        comissao = 700 + (0.16 * val);
        printf("Sua comissao sera de = R$ %.2f", comissao);
    }
    else if (val < 100000 && val >= 80000)
    {
        comissao = 650 + (0.14 * val);
        printf("Sua comissao sera de = R$ %.2f", comissao);
    }
    else if (val < 80000 && val >= 60000)
    {
        comissao = 600 + (0.14 * val);
        printf("Sua comissao sera de = R$ %.2f", comissao);
    }
    else if (val < 60000 && val >= 40000)
    {
        comissao = 550 + (0.14 * val);
        printf("Sua comissao sera de = R$ %.2f", comissao);
    }
    else if (val < 40000 && val >= 20000)
    {
        comissao = 500 + (0.14 * val);
        printf("Sua comissao sera de = R$ %.2f", comissao);
    }
    else if (val < 20000)
    {
        comissao = 400 + (0.14 * val);
        printf("Sua comissao sera de = %f", comissao);
    }
    

    return 0;
}