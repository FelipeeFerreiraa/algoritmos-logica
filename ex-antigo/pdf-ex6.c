#include <stdio.h>
int main() {
  float fah, celsius;
  printf("Digite uma temperatura em fahrenheit: ");
  scanf("%f", &fah);
  celsius = 5.0 * ((fah - 32) / 9.0);
  printf("%.2f em graus fahrenheit, convertido para celsius fica: %.2f", fah, celsius);
  return 0;
}