#include <stdio.h>
int main()
{

  int n, i, j, x = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  printf("Digite outro numero: ");
  scanf("%d", &i);

  printf("Digite outro numero: ");
  scanf("%d", &j);

  while (x <= n)
  {

    if (x % i == 0 || x % j == 0)
    {
      printf("%d, ", x);
    }

    x++;
  }

  return 0;
}