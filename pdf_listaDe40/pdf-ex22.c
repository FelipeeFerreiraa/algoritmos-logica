#include <stdio.h>
int main()
{
    float idade, tempoSevico;
    printf("Digite sua idade e o tempo de servico, para sabermos se voce pode aposentar.");
    scanf("%f %f", &idade, &tempoSevico);

    if (idade >= 65)
    {
        printf("Pode aposentar!");
    }
    else if (tempoSevico >= 30)
    {
        printf("Pode aposentar!");
    }
    else if (idade >= 60 && tempoSevico >= 25)
    {
        printf("Pode aposentar!");
    }
    else
    {
        printf("Nao pode aposentar!");
    }

    return 0;
}