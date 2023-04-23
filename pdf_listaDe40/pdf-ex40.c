#include <stdio.h>
int main()
{

    float custoDeFabrica, custoAoConsumidor;

    printf("Digite o custo de fabrica de um carro novo: ");
    scanf("%f", &custoDeFabrica);

    if (custoDeFabrica <= 12000)
    {
        custoAoConsumidor = custoDeFabrica + (custoDeFabrica * 0.05);
    }
    else if (custoDeFabrica >= 12000 && custoDeFabrica <= 25000)
    {
        custoAoConsumidor = custoDeFabrica + (custoDeFabrica * 0.10) + (custoDeFabrica * 0.15);
    }
    else if (custoDeFabrica > 25000)
    {
        custoAoConsumidor = custoDeFabrica + (custoDeFabrica * 0.15) + (custoDeFabrica * 0.20);
    }

    printf("Com o valor fornecido o custo ao consumidor do carro novo sera = R$%.2f ", custoAoConsumidor);

    return 0;
}