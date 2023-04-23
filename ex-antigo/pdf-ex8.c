#include <stdio.h>
int main() {
  float diasT, valorL, quantP;
  printf("Digite quantos dias foram trabalhados pelo encanador: ");
  scanf("%f", &diasT);
  valorL = diasT * 30.0;
  quantP = valorL - (valorL * 0.08);
  printf("O valor liquido a receber sera de: %.2f reais", quantP);
  return 0;
}