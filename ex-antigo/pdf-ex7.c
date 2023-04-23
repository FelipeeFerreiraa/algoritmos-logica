#include <stdio.h>
int main() {
  float salarioB, salarioR, grat, imp;
  printf("Digite seu salario base: ");
  scanf("%f", &salarioB);
  grat = salarioB * 0.05;
  imp = salarioB * 0.07;
  salarioR = salarioB - (imp) + grat;
  printf("Adicionando sua gratificaçao e retirando o valor do imposto, o salario a receber sera: %.2f ", salarioR);
  return 0;
}

