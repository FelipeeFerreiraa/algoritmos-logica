#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Digite o valor dos tres lados de um triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < (b + c))
    {
        if (b < (c + a))
        {
            if (c < (b + a))
            {
                if (a == b && a == c && b == c)
                {
                    printf("Triangulo equilatero!!");
                }
                else if (a != b && a != c && b != c)
                {
                    printf("Triangulo escaleno");
                }
                else if (a == b && c != a && c != b)
                {
                    printf("Triangulo isosceles!");
                    
                } else if (a == c && b != a && c != b)
                    {
                        printf("Triangulo isosceles!");
                    } else if (b == c && b != a && c != a)
                    {
                        printf("Triangulo isosceles!");
                    }
            }
            else
            {
                printf("Nao eh um triangulo! (c < (b + a))");
            }
        }
        else
        {
            printf("Nao eh um triangulo! (b < (c + a))");
        }
    }
    else
    {
        printf("Nao eh um triangulo! (a < (b + c))");
    }

    return 0;
}