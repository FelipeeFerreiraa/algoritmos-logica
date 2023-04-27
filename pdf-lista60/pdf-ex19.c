#include <stdio.h>
int main()
{
    int num, div1, val2, div3;
    float val1, val3;
    printf("Digite um numero inteiro entre 100 e 999: ");
    scanf("%d", &num);

    val1 = num % 10;
    div1 = num / 10;
    val2 = div1 % 10;
    div3 = div1 / 10;
    val3 = div3 % 10;

    printf("%.0f %d %.0f", val3, val2, val1);

    return 0;
}