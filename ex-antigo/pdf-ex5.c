#include <stdio.h>
#include <math.h>
int main() {
  float cat1, cat2, somaCat, hip;
  printf("Digite os catetos do triangulo retangulo: ");
  scanf("%f %f", &cat1, &cat2);
  somaCat = (cat1*cat1) + (cat2*cat2);
  hip = sqrt(somaCat);
  printf("A hipotenusa do triangulo retangulo e: %.2f", hip);
  return 0;
}