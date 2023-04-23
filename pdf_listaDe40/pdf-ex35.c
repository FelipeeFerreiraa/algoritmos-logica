#include <stdio.h>
int main()
{
    int dia, mes, ano;
    printf("Digite uma dia: (1 a 31)");
    scanf("%d", &dia);
    printf("Digite uma mes: (1 a 12)");
    scanf("%d", &mes);
    printf("Digite uma Ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0)
    {

        if ((mes == 2 && dia == 30) || (mes == 2 && dia == 31))
        {

            printf("Data INVALIDA!, fevereiro tem 29 dias neste ano.");
        }
        else
        {
            printf("%d/%d/%d, data VALIDA, eh Ano bissexto!", dia, mes, ano);
        }
    }
    else if (ano % 4 == 0 && (ano % 100) != 0)
    {
      
        if ((mes == 2 && dia == 30) || (mes == 2 && dia == 31))
        {
            printf("Data INVALIDA!, fevereiro tem 29 dias neste ano.");
        }
        else
        {
            printf("%d/%d/%d, data VALIDA, eh Ano bissexto!", dia, mes, ano);
        }
    }
    else
    {
        
        if ((mes == 2 && dia == 39) || (mes == 2 && dia == 30) || (mes == 2 && dia == 31))
        {
            printf("Data INVALIDA!, fevereiro tem 28 dias neste ano.");
        }
        else
        {
            printf("%d/%d/%d, data VALIDA, Nao eh um ano bissexto!", dia, mes, ano);
        }
    }
    return 0;
}