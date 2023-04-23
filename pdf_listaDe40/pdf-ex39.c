#include <stdio.h>
int main()
{

    float salario, anosDeServico;

    printf("Digite seu salario atual: ");
    scanf("%f", &salario);
    printf("Digite o seu tempo de servico (em anos): ");
    scanf("%f", &anosDeServico);

    if (salario <= 500)
    {

        if (anosDeServico <= 1)
        {
            salario = salario + (salario * 0.25);
        }
        else if (anosDeServico >= 1 && anosDeServico <= 3)
        {
            salario = salario + (salario * 0.25) + 100;
        }
        else if (anosDeServico >= 4 && anosDeServico <= 6)
        {
            salario = salario + (salario * 0.25) + 200;
        }
        else if (anosDeServico >= 7 && anosDeServico <= 10)
        {
            salario = salario + (salario * 0.25) + 300;
        }
        else if (anosDeServico > 10)
        {
            salario = salario + (salario * 0.25) + 500;
        }
    }
    else if (salario <= 1000)
    {
        if (anosDeServico <= 1)
        {
            salario = salario + (salario * 0.20);
        }
        else if (anosDeServico >= 1 && anosDeServico <= 3)
        {
            salario = salario + (salario * 0.20) + 100;
        }
        else if (anosDeServico >= 4 && anosDeServico <= 6)
        {
            salario = salario + (salario * 0.20) + 200;
        }
        else if (anosDeServico >= 7 && anosDeServico <= 10)
        {
            salario = salario + (salario * 0.20) + 300;
        }
        else if (anosDeServico > 10)
        {
            salario = salario + (salario * 0.20) + 500;
        }
    }
    else if (salario <= 1500)
    {
        if (anosDeServico <= 1)
        {
            salario = salario + (salario * 0.15);
        }
        else if (anosDeServico >= 1 && anosDeServico <= 3)
        {
            salario = salario + (salario * 0.15) + 100;
        }
        else if (anosDeServico >= 4 && anosDeServico <= 6)
        {
            salario = salario + (salario * 0.15) + 200;
        }
        else if (anosDeServico >= 7 && anosDeServico <= 10)
        {
            salario = salario + (salario * 0.15) + 300;
        }
        else if (anosDeServico > 10)
        {
            salario = salario + (salario * 0.15) + 500;
        }
    }
    else if (salario <= 2000)
    {
        if (anosDeServico <= 1)
        {
            salario = salario + (salario * 0.10);
        }
        else if (anosDeServico >= 1 && anosDeServico <= 3)
        {
            salario = salario + (salario * 0.10) + 100;
        }
        else if (anosDeServico >= 4 && anosDeServico <= 6)
        {
            salario = salario + (salario * 0.10) + 200;
        }
        else if (anosDeServico >= 7 && anosDeServico <= 10)
        {
            salario = salario + (salario * 0.10) + 300;
        }
        else if (anosDeServico > 10)
        {
            salario = salario + (salario * 0.10) + 500;
        }
    }
    else if (salario > 2000)
    {
        if (anosDeServico <= 1)
        {
            salario = salario;
        }
        else if (anosDeServico >= 1 && anosDeServico <= 3)
        {
            salario = salario + 100;
        }
        else if (anosDeServico >= 4 && anosDeServico <= 6)
        {
            salario = salario + 200;
        }
        else if (anosDeServico >= 7 && anosDeServico <= 10)
        {
            salario = salario + 300;
        }
        else if (anosDeServico > 10)
        {
            salario = salario + 500;
        }
    }

    printf("O salario final com os reajustes feitos sera = %.2f", salario);

    return 0;
}