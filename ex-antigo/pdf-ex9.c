#include <stdio.h>
int main() {
  float a, b, c;
  printf("Digite valores para A e B respectivamente: ");
  scanf("%f %f", &a, &b);
  c=a;
  a=b;
  b=c;
  printf("A partir dos valores recebidos de A e B, trocando-os tera: A= %.1f e B= %.1f", a, b);
  return 0;
  
}