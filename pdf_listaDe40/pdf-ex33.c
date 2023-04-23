#include <stdio.h>
int main()
{
    float preAnt, preNv;
    printf("Digite o preco antigo de algum produto: ");
    scanf("%f", &preAnt);

    if (preAnt <= 50)
    {
        preNv = preAnt + (preAnt * 0.05);
    }
    else if (preAnt >= 50 && preAnt <= 100)
    {
        preNv = preAnt + (preAnt * 0.1);
    }
    else if (preAnt > 100)
    {
        preNv = preAnt + (preAnt * 0.15);
    }

    if (preNv <= 80)
    {
        printf("O preco antigo ajustado ao preco novo, o produto em relacao ao preco esta 'BARATO'.");
    }
    else if (preNv >= 80 && preNv <= 120)
    {
        printf("O preco antigo ajustado ao preco novo, o produto em relacao ao preco esta 'NORMAL'.");
    }
    else if (preNv >= 120.1 && preNv <= 200)
    {
        printf("O preco antigo ajustado ao preco novo, o produto em relacao ao preco esta 'CARO'.");
    }
    else if (preNv > 200.1)
    {
        printf("O preco antigo ajustado ao preco novo, o produto em relacao ao preco esta 'MUITO CARO'.");
    }

    return 0;
}