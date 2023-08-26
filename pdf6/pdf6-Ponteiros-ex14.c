#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float raio, area, volume;
    // double pi = M_PI;
    printf("Digite o raio da esfera: \n");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Raio da esfera eh= %.3f\nArea da superficie da esfera eh= %.3f\nVolume da esfera eh= %.3f\n", raio, area, volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4.0 * 3.14 * pow(R, 2);
    *volume = (4.0 / 3.0) * 3.14 * pow(R, 3);
}