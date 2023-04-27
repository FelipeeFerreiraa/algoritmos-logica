#include <stdio.h>
int main()
{
    
    float numH = 1, x = 1, num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    while (x <= num)
    {

        numH = numH + (1 / x);
        printf("%f, ", x);

        x++;
    }

    printf("\n%f ", numH);

    return 0;
}