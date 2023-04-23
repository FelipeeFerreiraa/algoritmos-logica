#include <stdio.h>
int main() {
      float fah, celsius;
      printf("Digite um valor em graus celsius: ");
      scanf("%f", &celsius);
      fah = (celsius * (9.0/5.0) ) + 32;
      printf("%.2f em graus celsius equivalem a %.2f graus farenheit", celsius, fah);
      return 0;
}