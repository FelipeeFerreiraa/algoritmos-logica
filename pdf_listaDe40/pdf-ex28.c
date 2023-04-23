#include <stdio.h>
#include <math.h>
int main()
{ 
    
    float numero1, numero2, numero3, mediaG, mediaP, mediaH, mediaA;
    printf("Digite tres numeros inteiros positivos:");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

    printf("A media Geometrica\n");
    mediaG = cbrt(numero1 * numero2 * numero3);
    printf("A media Geometrica desse tres numeros eh= %.2f \n\n", mediaG);

    printf("A media Ponderada\n");
    mediaP = (numero1 + (2 * numero2) + (3 * numero3)) / 6;
    printf("A media Ponderada desse tres numeros eh= %.2f \n\n", mediaP);

    printf("A media Harmonica\n");
    mediaH = 1 / ((1 / numero1) + (1 / numero2) + (1 / numero3));
    printf("A media Harmonica desse tres numeros eh= %.3f \n\n", mediaH);

    printf("A media Aritmetica\n");
    mediaA = (numero1 + numero2 + numero3) / 3;
    printf("A media Aritmetica desse tres numeros eh= %.1f \n", mediaA);
    

    return 0;
}