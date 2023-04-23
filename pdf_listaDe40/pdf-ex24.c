#include <stdio.h>
int main()
{
    float valor, estado;
    printf("Digite para qual estado voce vai enviar seu preoduto\n1-MG\n2-SP\n3-RJ\n4-MS\n");
    scanf("%f", &estado);
    printf("Agora digite o valor do produto: ");
    scanf("%f", &valor);
    if (estado == 1)
    {
        valor = valor + (valor * 0.07);
        printf("Para Minas Gerais o preco final do produto sera = %.2f", valor);
    } else  if (estado == 2)
    {
        valor = valor + (valor * 0.12);
        printf("Para Sao Paulo o preco final do produto sera = %.2f", valor);
    } else  if (estado == 3)
    {
        valor = valor + (valor * 0.15);
        printf("Para Rio de Janeiro o preco final do produto sera = %.2f", valor);
    } else  if (estado == 4)
    {
        valor = valor + (valor * 0.08);
        printf("Para Mato Grosso do Sul o preco final do produto sera = %.2f", valor);
    } else {
        printf("ERRO - Estado invalido!");
    }
    return 0;

}