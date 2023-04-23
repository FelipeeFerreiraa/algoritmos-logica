#include <stdio.h>
int main()
{

    float numero1, numero2, operacao;
    printf("escolha e digite o numero de qual operacao voce deseja fazer: 1-Adicao, 2-subtracao, 3-multiplicacao, 4-divisao");
    scanf("%f", &operacao);
    printf("Agora digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);
    if (operacao == 1)
    {
        printf("A soma eh %.1f ", numero1 + numero2);
    }
    else if (operacao == 2)
    {
        printf("A subtracao eh %.1f ", numero1 - numero2);
    }
    else if (operacao == 3)
    {
        printf("A multiplicacao eh %.1f ", numero1 * numero2);
    }
    else if (operacao == 4)
    {
        printf("A divisao eh %.1f ", numero1 / numero2);
    }
    else
    {
        printf("Numero invalido!!!");
    }
    return 0;
}