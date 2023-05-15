#include <stdio.h>
int main()
{

    float altChicco = 1.5, altZe = 1.1, ano = 1;

    while (altChicco >= altZe)
    {
        altChicco = altChicco + 0.02;
        altZe = altZe + 0.03;
        
        printf("%f altura Chico, %f altura ZE\n", altChicco, altZe);
        ano++;

        
    }

    printf("anos necessarios = %.0f", ano);

    return 0;
}