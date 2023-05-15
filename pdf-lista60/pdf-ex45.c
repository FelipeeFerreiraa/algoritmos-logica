#include <stdio.h>
int main()
{
    int km, ms, opcao, v;

    do
    {
        printf("Digite uma velocidade:\n");
        scanf("%d", &v);

        printf("escolha a conversao:\n");
        printf("digite [1] para converter Km/h em m/s\n");
        printf("digite [2] para converter m/s em Km/h\n");
        printf("digite [3] para finalizar\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            ms = v / 3.6;
            printf("%d Km/h = %d m/s\n", v, ms);
        }
        if (opcao == 2)
        {
            km = v * 3.6;
            printf("%d m/s = %d Km/h\n", v, km);
        }
        if (opcao == 3)
        {
            printf("Finalizando conversoes!\n");
        }
    } while (opcao != 3);

    // 1m/s = 3.6km/h
    // 1km/h =  Digite uma velocidade em Km/h: (ex:Ha quantos Km/h vc anda na rodovia)\n

    return 0;
}