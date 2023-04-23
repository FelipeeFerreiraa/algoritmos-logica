#include <stdio.h>
int main() {
  int a, b;
  int res;
  
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  res = (b*b*b) + (a*b) - (2*b) + (a % b);
  printf("f(x)= %d", res);
  return 0;
}