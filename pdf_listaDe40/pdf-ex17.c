#include <stdio.h>
int main()
{
    float baseMaior, baseMenor, altura;
    int area;
    printf("para calcular a area de um trapezio, digite a base maior: (maior que zero)");
    scanf("%f", &baseMaior);
    printf("digite a base menor: (maior que zero)");
    scanf("%f", &baseMenor);
    printf("digite a altura:");
    scanf("%f", &altura);
    area = ((baseMaior + baseMenor) * altura) / 2;
    printf("A area do trapezio com base nos valores fornecidos eh = %d ", area);
    return 0;
}