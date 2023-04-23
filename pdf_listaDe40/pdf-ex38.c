#include <stdio.h>
int main()
{

    int dia, mes, ano;
    printf("Digite o dia que voce nasceu, o mes e o ano: (27 8 2002)");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano < 2008)
    {
        if (ano % 400 == 0) // verifica se eh ano bissexto
        {
            if (mes == 2) // verifica se eh fevereiro
            {
                if (dia > 0 && dia <= 29)
                {
                    printf("Data Valida - anoBissexto!\n Mes com 29 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) // verifica meses com 30dias
            {
                if (dia <= 30)
                {
                    printf("Data Valida - anoBissexto!\n Mes com 30 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) // verifica meses com 31dias
            {
                if (dia <= 31)
                {
                    printf("Data Valida - anoBissexto!\n Mes com 31 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes <= 0 || mes > 13)
            {
                printf("Data INVALIDA!!\nMes incorreto");
            }
        }
        else if (ano % 4 == 0 && (ano % 100) != 0) // verifica se eh ano bissexto
        {
            if (mes == 2) // verifica se eh fevereiro
            {
                if (dia > 0 && dia <= 29)
                {
                    printf("Data Valida - anoBissexto!\n Mes com 29 dias.");
                }
                else if (dia <= 0 && dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) // verifica meses com 30dias
            {
                if (dia <= 30)
                {
                    printf("Data Valida - anoBissexto!\n Mes com 30 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) // verifica meses com 31dias
            {
                if (dia <= 31)
                {
                    printf("Data Valida - anoBissexto!\n Mes com 31 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes <= 0 || mes > 13)
            {
                printf("Data INVALIDA!!\nMes incorreto");
            }
        }

        else // se nao for ano bissexto vem pra ca
        {
            if (mes == 2) // verifica se eh fevereiro
            {
                if (dia > 0 && dia <= 28)
                {
                    printf("Data Valida - NaoBissexto!\n Mes com 28 dias.");
                }
                else if (dia <= 0 && dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) // verifica meses com 30dias
            {
                if (dia <= 30)
                {
                    printf("Data Valida - NaoBissexto!\n Mes com 30 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) // verifica meses com 31dias
            {
                if (dia <= 31)
                {
                    printf("Data Valida - NaoBissexto!\n Mes com 31 dias.");
                }
                else if (dia <= 0 || dia > 31)
                {
                    printf("Data INVALIDA!!\nDia incorreto");
                }
            }
            else if (mes <= 0 || mes > 13)
            {
                printf("Data INVALIDA!!\nMes incorreto");
            }
        }
    } else {
        printf("Data INVALIDA!!!\n Ano menor que 2008.");
    }

    return 0;
}