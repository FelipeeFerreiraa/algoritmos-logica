#include <stdio.h>
int main()
{
    int horaC, minC, horaP, minP;
    float tarifa = 0, minF, horaF;

    printf("Digite o horario de chegada: (de 1 a 24)para horas e (de a a 60)para minutos ");
    scanf("%d %d", &horaC, &minC);
    printf("Digite o horario de partida: (de 1 a 24)para horas e (de a a 60)para minutos ");
    scanf("%d %d", &horaP, &minP);

    if (horaC >= horaP && minC >= minP)
    {
        horaF = 24 - (horaC - horaP);
        minF = minC - minP;
    }
    else if (horaC >= horaP && minC <= minP)
    {
        horaF = 24 - (horaC - horaP);
        minF = minP - minC;
    }

    else if (horaC <= horaP && minC <= minP)
    {
        horaF = horaP - horaC;
        minF = minP - minC;
    }
    else if (horaC <= horaP && minC >= minP)
    {
        horaF = 1 - (horaP - horaC);
        minF = 60 + (minP - minC);
        if (horaF == -4)
        {
            horaF = 5;
        }
        if (horaF == -7)
        {
            horaF = 7;
        }
    }
    else
    {
        horaF = (horaP - horaC);
        minF = 60 + (minP - minC);
    }

    // colocando os preco nas hrs

    if (horaF == 0 && minF <= 60)
    {
        tarifa++;
    }
    else if (horaF == 1 && minF == 0)
    {
        tarifa++;
    }
    else if (horaF == 1 && minF <= 60)
    {
        tarifa = tarifa + 2;
    }
    else if (horaF == 2 && minF == 0)
    {
        tarifa = tarifa + 2;
    }
    else if (horaF == 2 && minF <= 60)
    {
        tarifa = tarifa + 2 + 1.40;
    }
    else if (horaF == 3 && minF == 0)
    {
        tarifa = tarifa + 2 + 1.40;
    }
    else if (horaF == 3 && minF <= 60)
    {
        tarifa = tarifa + 2 + (1.40 * 2);
    }
    else if (horaF == 4 && minF == 0)
    {
        tarifa = tarifa + 2 + (1.40 * 2);
    }
    else if (horaF >= 4 && minF == 0)
    {
        tarifa = 4.80 + ((horaF - 4) * 2);
    }
    else if (horaF >= 4 && minF <= 60)
    {
        tarifa = 4.80 + ((horaF - 3) * 2);
    }

    printf("horario permanecido:  %.0f(h) : %.0f(min)", horaF, minF);
    printf("Valor da tarifa %.2f ", tarifa);

        return 0;
}
