#include <stdio.h>
#include <time.h>

int main()
{

    int num, tentativa, qtdTentativas = 1;
    srand(time(NULL));
    num = rand() % 1000 + 1;

    
     printf("Foi gerado um numero aleatorio de 1 a 1000, tente adivinha-lo: \n");
    do
    {
       
        scanf("%d", &tentativa);

        if (num > tentativa)
        {
            printf("maior\n");
            qtdTentativas++;
           // tentativa = scanf("%d", &tentativa);
        }
        else if (num < tentativa)
        {
            printf("menor\n");
            qtdTentativas++;
           // tentativa = scanf("%d", &tentativa);
        }

        if (tentativa == num)
        {
            printf("Vove descobriu 'PARABENS', com %d tentativas", qtdTentativas);
        }

    } while (tentativa != num);

    return 0;
}