#include <stdio.h>
#include <math.h>
int main()
{

    float salarioCarlos, salarioJao, montanteJ, montanteC, meses = 1;
    /*porcentagemC, porcentagemJ*/
    printf("Digite o salario de carlos, joao recebe 1/3 disso: ");
    scanf("%f", &salarioCarlos);

    salarioJao = salarioCarlos / 3;

    /*
        printf("Digite a taxa do juros composto da aplicacao de CARLO (quantos porcento ao mes)");
        scanf("%f", &porcentagemC);
        porcentagemC = porcentagemC / 100;

        printf("Digite a taxa do juros composto da aplicacao de JOAO (quantos porcento ao mes)");
        scanf("%f", &porcentagemJ);
        porcentagemJ = porcentagemJ / 100;
    */

    while (montanteC >= montanteJ)
    {
        montanteC = salarioCarlos * pow((1 + 0.02), meses);
        montanteJ = salarioJao * pow((1 + 0.05), meses);
        salarioCarlos = montanteC;
        salarioJao = montanteJ;
        printf("%f montante Carlos, %f montante Jao\n", montanteC, montanteJ);
        meses++;

        salarioCarlos = montanteC;
        salarioJao = montanteJ;
    }

    printf("meses aplicados = %.1f", meses);

    return 0;
}