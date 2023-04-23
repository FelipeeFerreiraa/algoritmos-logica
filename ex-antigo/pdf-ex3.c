#include <stdio.h>
int main() {
  float raio, area, perimetro;
  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);
  area = 3.1415 * (raio * raio);
  perimetro = 2 * 3.1415 * raio;
  printf("Um circulo com o raio %.2f, possui area: %.2f, e perimetro: %.2f ", raio, area, perimetro);
  return 0;
}