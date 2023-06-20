#include <stdio.h>
#include <string.h>

void verificarQuadradoPerfect(int a);

int main()
{
    int num;
    printf("Digite um numero para a verificacao: \n");
    scanf("%d", &num);

    verificarQuadradoPerfect(num);

    return 0;
}

void verificarQuadradoPerfect(int a)
{

    for (int x = 0; x < a; x++)
    {

        if (x * x == a)
        {
            printf("O numero fornecido eh um quadrado perfeito!!!\n");
        }
        
    }
}