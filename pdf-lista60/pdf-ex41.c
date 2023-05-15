#include <stdio.h>
int main()
{

    float r1, r2, rEq;
    do
    {
        printf("Digite a resistencia do resistor-1: ");
        scanf("%f", &r1);

    } while (r1 <= 0);

    do
    {
        printf("Digite a resistencia do resistor-2: ");
        scanf("%f", &r2);
    } while (r1 <= 0);

    rEq = (r1 * r2) / (r1 + r2);

    printf("A resistencia Equivalente dos resistores eh = %f", rEq);

    return 0;
}