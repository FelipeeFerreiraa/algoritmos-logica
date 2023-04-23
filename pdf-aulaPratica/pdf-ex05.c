#include <stdio.h>
int main()
{
    int lim, x = 1, divisores = 0;

    do
    {
        printf("Digite um numero limite: ");
        scanf("%d", &lim);
    } while (lim < 1);

    while (x <= lim)
    {
        // printf(" %d ", lim);

        divisores = 1;
        printf("\nOs divisores ate %d: ", x);
        while (divisores <= x) // pega cada divisor pelo o msm (x)
        {
            if (x % divisores == 0)  //confere os divisores
            {
                printf("[%d] , ", divisores);

                
            }
            divisores++;
        }
        x++;
    }
    //}

    /*  mostra os nmrs divisores   */
    /*  mostra os nmrs divisores   */
    /*  mostra os nmrs divisores   */
    /*  mostra os nmrs divisores   */
    /*
       if (lim % x == 0) {
            divisores++;

            printf("%d,  \n", x);
        }
        x++;*/

    return 0;
}
