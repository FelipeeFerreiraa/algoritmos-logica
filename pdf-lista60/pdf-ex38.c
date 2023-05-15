

#include <stdio.h>
int main()
{

    int a, b, c, termoPitagorico;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    termoPitagorico = (a * a) + (b * b) + (c * c);
    printf("%d + %d = %d \n", (a * a), (b * b), (a * a) + (b * b));

    printf("O termo pitagorico dos valores digitados eh = %d", termoPitagorico);

    return 0;
}
