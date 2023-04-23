#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1, x2;
    printf("Digite os valores de A, B e C para calcularmos uma equacao do equacao do segundo grau!.");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0)
    {
        delta = pow(b, 2) - 4 * (a * c);
        if (delta < 0)
        {
            printf("Nao existe raiz");
        }
        else if (delta == 0)
        {
            printf("Raiz unica / raiz = 0");
            b = b * -1;
            x1 = (b) / (2 * a);
            x2 = (b) / (2 * a);
            printf("Com os valores fornecidos x1= %.1f e x2= %.1f", x1, x2);
        }
        else if (delta > 0)
        {
            delta = sqrt(delta);
            b = b * -1;
            x1 = (b + delta) / (2 * a);
            x2 = (b - delta) / (2 * a);
            printf("Com os valores fornecidos x1= %.1f e x2= %.1f", x1, x2);
        }
    }
    else if (a == 0)
    {
        printf("A igual a zero, Nao eh uma equacao do segundo grau!!");
    }

    return 0;
}