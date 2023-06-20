#include <stdio.h>
#include <string.h>

void verificarTriangulo(int x, int y, int z);

// main
int main()
{

    int lado1, lado2, lado3, x = 0;

    printf("Digite o comprimento dos tres lados de um triangulo: (cm) \n");
    do
    {
        printf("Triangulo %d: lado 1: \n", x + 1);
        scanf("%d", &lado1);
        printf("Triangulo %d: lado 2: \n", x + 1);
        scanf("%d", &lado2);
        printf("Triangulo %d: lado 3: \n", x + 1);
        scanf("%d", &lado3);

        verificarTriangulo(lado1, lado2, lado3);

        x++;
    } while (lado1 && lado2 && lado3 != 0);

    return 0;
}

// funçao
void verificarTriangulo(int x, int y, int z)
{
    if (x + y > z && y + z > x && x + z > y)
    {

        if (x == y && x == z)
        {
            printf("Triangulo Equilatero! (3 lados sao iguais) \n\n");
        }

        if ((x == y && x != z) || (x == z && x != y))
        {
            printf("Triangulo Isosceles! (2 lados sao iguais) \n\n");
        }

        if (x != y && x != z)
        {
            printf("Triangulo Escaleno! (3 lados sao diferentes) \n\n");
        }
    }
    else
    {
        printf("Nao eh um triangulo!\n");
    }
}